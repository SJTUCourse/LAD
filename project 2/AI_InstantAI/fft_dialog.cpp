#include "fft_dialog.h"
#include "ui_fft_dialog.h"
#include <QPalette>
#include <QtWidgets/QListWidgetItem>
#include <QtWidgets/QMessageBox>
#include <QtCore/qmath.h>
#include <QString>

fft_dialog::fft_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fft_dialog)
{
    ui->setupUi(this);
    connect(ui->btn_highpass,SIGNAL(clicked()),this,SLOT(ButtonHighPassClicked()));
    connect(ui->btn_lowpass,SIGNAL(clicked()),this,SLOT(ButtonLowPassClicked()));
    connect(ui->btn_show,SIGNAL(clicked()),this,SLOT(FFT_show()));
    connect(ui->btn_size_change,SIGNAL(clicked()),this,SLOT(ButttonSizeChangeClicked()));
    connect(ui->sld_fre,SIGNAL(valueChanged(int)),this,SLOT(SLideFreChange(int)));
    connect(ui->sld_size,SIGNAL(valueChanged(int)),this,SLOT(SLideSizeChange(int)));

    graph_fre = new SimpleGraph(ui->fre_Frame);
    graph_fre->setFixedSize(ui->fre_Frame->size());

    graph_time = new SimpleGraph(ui->Time_Frame);
    graph_time->setFixedSize(ui->Time_Frame->size());

    graph_fre->m_xCordTimeDiv = 512;
    graph_fre->m_yCordRangeMax = 600;
    graph_fre->m_yCordRangeMin = -150;

    graph_time->m_xCordTimeDiv = 1024;
    graph_time->m_yCordRangeMax = 20;
    graph_time->m_yCordRangeMin = -20;

    ui->lbl_fs_2_pos->setText(QString("%1").arg(fs/2));
    ui->lbl_fre_fs->setText(QString("%1").arg(fs/2));
}

fft_dialog::~fft_dialog()
{
    delete ui;
}

void fft_dialog::ButtonLowPassClicked()
{

    int i;
    order_filter_min = qRound((fs/2.0-ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);
    order_filter_max = qRound((fs/2.0+ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);

    //滤波操作
    for (i = order_filter_min; i<order_filter_max;i++)
    {
        filterreal[i]=xreal[i];
        filterimag[i]=ximag[i];
    }

    //Ifft 操作
    IFFT (filterreal, filterimag, N);

    //Ifft shift 操作
    for (i=0 ; i<N;i++)
    {
        filterreal[i]=filterreal[i]*pow(-1.0,i);
        filterimag[i]=filterimag[i]*pow(-1.0,i);
    }

    double scale = qPow(10,(ui->sld_size->value()/100.0*2));
    //显示IFFT_结果
    double size_out [1024] = {0};
    for(i=0;i<N;i++)
        size_out[i] = scale * filterreal[i];
    graph_time->Chart(size_out, 1, 1024, 1.0 * 10 / 1000);
}

void fft_dialog::ButtonHighPassClicked()
{

    int i;
    order_filter_min = qRound((fs/2.0-ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);
    order_filter_max = qRound((fs/2.0+ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);

    //滤波操作
    for (i = 0; i<order_filter_min;i++)
    {
        filterreal[i]=xreal[i];
        filterimag[i]=ximag[i];
    }
    for (i = order_filter_max; i<N;i++)
    {
        filterreal[i]=xreal[i];
        filterimag[i]=ximag[i];
    }

    //Ifft 操作
    IFFT (filterreal, filterimag, N);

    //Ifft shift 操作
    for (i=0 ; i<N;i++)
    {
        filterreal[i]=filterreal[i]*pow(-1.0,i);
        filterimag[i]=filterimag[i]*pow(-1.0,i);
    }

    double scale = qPow(10,(ui->sld_size->value()/100.0*2));
    //显示IFFT_结果
    double size_out [1024] = {0};
    for(i=0;i<N;i++)
        size_out[i] = scale * filterreal[i];
    graph_time->Chart(size_out, 1, 1024, 1.0 * 10 / 1000);
}

void fft_dialog::ButttonSizeChangeClicked()
{
    size_change_form_origin = qPow(10,(ui->sld_size->value()/100.0*2));
    double size_out [1024] = {0};
    for(int i=0;i<N;i++)
        size_out[i] = size_change_form_origin * filterreal[i];
    graph_time->Chart(size_out, 1, 1024, 1.0 * 10 / 1000);
}

void fft_dialog::SLideFreChange(int value)
{
    QString str = tr("");
    str.sprintf("%.4f", (value/1000.0)*(fs/2.0));
    ui->lbl_fre_now->setText(str);
}

void fft_dialog::SLideSizeChange(int value)
{
    QString str = tr("");
    str.sprintf("%.4f", qPow(10,(value/100.0*2)));
    ui->lbl_size_now->setText(str);
}

void fft_dialog::update()
{
    QString str = tr("");
    str.sprintf("%.4f", (ui->sld_fre->value()/1000.0)*(fs/2.0));
    ui->lbl_fre_now->setText(str);
    str.sprintf("%.4f", qPow(10,(ui->sld_size->value()/100.0*2)));
    ui->lbl_size_now->setText(str);
    ui->lbl_chan_now->setText(QString::number(channel));
    ui->lbl_fs_2_pos->setText(QString("%1").arg(fs/2));
    ui->lbl_fre_fs->setText(QString("%1").arg(fs/2));
}

inline void fft_dialog::swap (double &a, double &b)
{
    double t;
    t = a;
    a = b;
    b = t;
}

void fft_dialog::bitrp (double xreal [], double ximag [], int n)
{
    // 位反转置换 Bit-reversal Permutation
    int i, j, a, b, p;
    for (i = 1, p = 0; i < n; i *= 2)
    {
        p ++;
    }
    for (i = 0; i < n; i ++)
    {
        a = i;
        b = 0;
        for (j = 0; j < p; j ++)
        {
            b = (b << 1) + (a & 1);    // b = b * 2 + a % 2;
            a >>= 1;        // a = a / 2;
        }
        if ( b > i)
        {
            swap (xreal [i], xreal [b]);
            swap (ximag [i], ximag [b]);
        }
    }
}

void fft_dialog::FFT(double xreal [], double ximag [], int n)
{
    // 快速傅立叶变换，将复数 x 变换后仍保存在 x 中，xreal, ximag 分别是 x 的实部和虚部
    double wreal [N / 2], wimag [N / 2], treal, timag, ureal, uimag, arg;
    int m, k, j, t, index1, index2;
    bitrp (xreal, ximag, n);

    // 计算 1 的前 n / 2 个 n 次方根的共轭复数 W'j = wreal [j] + i * wimag [j] , j = 0, 1, ... , n / 2 - 1
    arg = - 2 * 3.1415926 / n;
    treal = cos (arg);
    timag = sin (arg);
    wreal [0] = 1.0;
    wimag [0] = 0.0;
    for (j = 1; j < n / 2; j ++)
    {
        wreal [j] = wreal [j - 1] * treal - wimag [j - 1] * timag;
        wimag [j] = wreal [j - 1] * timag + wimag [j - 1] * treal;
    }
    for (m = 2; m <= n; m *= 2)
    {
        for (k = 0; k < n; k += m)
        {
            for (j = 0; j < m / 2; j ++)
            {
                index1 = k + j;
                index2 = index1 + m / 2;
                t = n * j / m;    // 旋转因子 w 的实部在 wreal [] 中的下标为 t
                treal = wreal [t] * xreal [index2] - wimag [t] * ximag [index2];
                timag = wreal [t] * ximag [index2] + wimag [t] * xreal [index2];
                ureal = xreal [index1];
                uimag = ximag [index1];
                xreal [index1] = ureal + treal;
                ximag [index1] = uimag + timag;
                xreal [index2] = ureal - treal;
                ximag [index2] = uimag - timag;
            }
        }
    }
}

void  fft_dialog::IFFT (double xreal [], double ximag [], int n)
{
    // 快速傅立叶逆变换
    double wreal [N / 2], wimag [N / 2], treal, timag, ureal, uimag, arg;
    int m, k, j, t, index1, index2;
    bitrp (xreal, ximag, n);

    // 计算 1 的前 n / 2 个 n 次方根 Wj = wreal [j] + i * wimag [j] , j = 0, 1, ... , n / 2 - 1
    arg = 2 * 3.1415926 / n;
    treal = cos (arg);
    timag = sin (arg);
    wreal [0] = 1.0;
    wimag [0] = 0.0;
    for (j = 1; j < n / 2; j ++)
    {
        wreal [j] = wreal [j - 1] * treal - wimag [j - 1] * timag;
        wimag [j] = wreal [j - 1] * timag + wimag [j - 1] * treal;
    }

    for (m = 2; m <= n; m *= 2)
    {
        for (k = 0; k < n; k += m)
        {
            for (j = 0; j < m / 2; j ++)
            {
                index1 = k + j;
                index2 = index1 + m / 2;
                t = n * j / m;    // 旋转因子 w 的实部在 wreal [] 中的下标为 t
                treal = wreal [t] * xreal [index2] - wimag [t] * ximag [index2];
                timag = wreal [t] * ximag [index2] + wimag [t] * xreal [index2];
                ureal = xreal [index1];
                uimag = ximag [index1];
                xreal [index1] = ureal + treal;
                ximag [index1] = uimag + timag;
                xreal [index2] = ureal - treal;
                ximag [index2] = uimag - timag;
           }
        }
    }

    for (j=0; j < n; j ++)
    {
        xreal [j] /= n;
        ximag [j] /= n;
    }
}

void fft_dialog::FFT_show ()
{
    int n=N, i;
    FILE *input,*output;
    //load data
    char inputfile_0 []=".\\channel_0.txt";
    char inputfile_1 []=".\\channel_1.txt";
    char inputfile_2 []=".\\channel_2.txt";
    char inputfile_3 []=".\\channel_3.txt";
    char inputfile_4 []=".\\channel_4.txt";
    char inputfile_5 []=".\\channel_5.txt";
    char inputfile_6 []=".\\channel_6.txt";
    char inputfile_7 []=".\\channel_7.txt";
    char outputfile []=".\\out_0.txt";

    switch(channel)
    {
      case 0:
      {
        if (!(input = fopen (inputfile_0, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      case 1:
      {
        if (!(input = fopen (inputfile_1, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      case 2:
      {
        if (!(input = fopen (inputfile_2, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      case 3:
      {
        if (!(input = fopen (inputfile_3, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      case 4:
      {
        if (!(input = fopen (inputfile_4, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      case 5:
      {
        if (!(input = fopen (inputfile_5, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      case 6:
      {
        if (!(input = fopen (inputfile_6, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      case 7:
      {
        if (!(input = fopen (inputfile_7, "r")))
        {
            printf ("Cannot open file. ");
            exit (1);
        };
        break;
      }
      default:{break;}
    }

    if (!(output = fopen (outputfile, "w")))
    {
        printf ("Cannot open file. ");
        exit (1);
    }

    for (i=0; i<N;i++)
    {
        fscanf (input, "%lf%lf", xreal + i, ximag + i);
    }



    for (i=0;i<N;i++)
    {
        filterreal[i] = xreal[i];
        filterimag[i] = ximag[i];

    }
    //输出output文件
    fprintf (output, "FFT: i real imag\n ");
    for (i = 0; i < n; i ++)
    {
        fprintf (output, "%4d%8.4f%8.4f\n", i, xreal [i], ximag [i]);
    }
    fprintf (output, "================================= ");

    //显示时间域结果
    double scale = qPow(10,(ui->sld_size->value()/100.0*2));
    double size_out [1024] = {0};
    for(i=0;i<N;i++)
        size_out[i] = scale * xreal[i];
    graph_time->Chart(size_out, 1, 1024, 1.0 * 10 / 1000);

    //fftshift 操作
    for (i=0 ; i<n;i++)
    {
        xreal[i]=xreal[i]*pow(-1.0,i);
    }

    //fft 操作
    FFT (xreal, ximag,n);

    //显示频域结果
    double positive[512]={0};
    for(i=N/2;i<N;i++)
        positive[i-N/2]=pow(pow(xreal[i],2)+pow(ximag[i],2),0.5);
    graph_fre->Chart(positive, 1, 512, 1.0 * 10 / 1000);

    //关闭文件
    if (fclose (input))
    {
        printf ("File close error. ");
        exit (1);
    }

    if (fclose (output))
    {
        printf ("File close error. ");
        exit (1);
    }
}
