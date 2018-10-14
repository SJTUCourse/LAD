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
    connect(ui->btn_lowpass,SIGNAL(clicked()),this,SLOT(ButtonHighPassClicked()));
    connect(ui->btn_size_change,SIGNAL(clicked()),this,SLOT(ButttonSizeChangeClicked()));
    connect(ui->sld_fre,SIGNAL(valueChanged(int)),this,SLOT(SLideFreChange(int)));
    connect(ui->sld_size,SIGNAL(valueChanged(int)),this,SLOT(SLideSizeChange(int)));

}

fft_dialog::~fft_dialog()
{
    delete ui;
}
void fft_dialog::ButtonLowPassClicked()
{
    order_filter_min = qRound((fs/2.0-ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);
    order_filter_max = qRound((fs/2.0+ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);
}
void fft_dialog::ButtonHighPassClicked()
{
    order_filter_min = qRound((fs/2.0-ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);
    order_filter_max = qRound((fs/2.0+ui->sld_fre->value()/1000.0*(fs/2.0))/(fs)*N);
}
void fft_dialog::ButttonSizeChangeClicked()
{
    size_change_form_origin = qPow(10,(ui->sld_size->value()/100.0*2));
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
}
