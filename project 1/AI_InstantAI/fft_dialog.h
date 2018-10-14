#ifndef FFT_DIALOG_H
#define FFT_DIALOG_H

#include <QDialog>
#include <QtCore/QtCore>
#include "../common/simplegraph.h"

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


private:
    Ui::fft_dialog *ui;
    int N =1024;
    int order_filter_min;
    int order_filter_max;
    double size_change_form_origin;

private slots:
    void ButtonLowPassClicked();
    void ButtonHighPassClicked();
    void ButttonSizeChangeClicked();
    void SLideFreChange(int);
    void SLideSizeChange(int);
};

#endif // FFT_DIALOG_H
