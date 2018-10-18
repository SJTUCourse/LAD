#ifndef FFT_DIALOG_H
#define FFT_DIALOG_H

#include <QDialog>
#include <QtCore/QtCore>
#include "../common/simplegraph.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

namespace Ui {
class fft_dialog;
}

class fft_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit fft_dialog(QWidget *parent = nullptr);
    ~fft_dialog();
    double fs = 100;
    void update();
    int channel = 0;

    void IFFT (double xreal [], double ximag [], int n);
    void FFT(double xreal [], double ximag [], int n);
    void bitrp (double xreal [], double ximag [], int n);
    inline void swap (double &a, double &b);
    double xreal[1024],ximag[1024];
    double filterreal [1024]={0}, filterimag [1024] ={0};

private:
    SimpleGraph *graph_fre;
    SimpleGraph *graph_time;
    Ui::fft_dialog *ui;
    int N =1024;
    int order_filter_min;
    int order_filter_max;
    double scale_from_origin=1.0;
    double size_change_form_origin;

private slots:
    void ButtonLowPassClicked();
    void ButtonHighPassClicked();
    void FFT_show ();
    void ButttonSizeChangeClicked();
    void SLideFreChange(int);
    void SLideSizeChange(int);
};

#endif // FFT_DIALOG_H
