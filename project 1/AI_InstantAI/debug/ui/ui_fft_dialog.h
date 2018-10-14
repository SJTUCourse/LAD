/********************************************************************************
** Form generated from reading UI file 'fft_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFT_DIALOG_H
#define UI_FFT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_fft_dialog
{
public:
    QFrame *fre_Frame;
    QFrame *Time_Frame;
    QLabel *lbl_time;
    QLabel *lbl_fre;
    QLabel *lbl_fre_choice;
    QLabel *lbl_size_choice;
    QSlider *sld_fre;
    QLabel *lbl_fre_0hz;
    QLabel *lbl_fre_fs;
    QSlider *sld_size;
    QLabel *lbl_size_neg2;
    QLabel *lbl_size_2;
    QPushButton *btn_lowpass;
    QPushButton *btn_highpass;
    QPushButton *btn_size_change;
    QLabel *lbl_fre_now;
    QLabel *lbl_size_now;

    void setupUi(QDialog *fft_dialog)
    {
        if (fft_dialog->objectName().isEmpty())
            fft_dialog->setObjectName(QStringLiteral("fft_dialog"));
        fft_dialog->resize(762, 520);
        fft_dialog->setMaximumSize(QSize(762, 520));
        fre_Frame = new QFrame(fft_dialog);
        fre_Frame->setObjectName(QStringLiteral("fre_Frame"));
        fre_Frame->setGeometry(QRect(20, 20, 621, 150));
        fre_Frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        fre_Frame->setFrameShape(QFrame::StyledPanel);
        fre_Frame->setFrameShadow(QFrame::Raised);
        Time_Frame = new QFrame(fft_dialog);
        Time_Frame->setObjectName(QStringLiteral("Time_Frame"));
        Time_Frame->setGeometry(QRect(20, 190, 621, 150));
        Time_Frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        Time_Frame->setFrameShape(QFrame::StyledPanel);
        Time_Frame->setFrameShadow(QFrame::Raised);
        lbl_time = new QLabel(fft_dialog);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(660, 80, 54, 12));
        lbl_fre = new QLabel(fft_dialog);
        lbl_fre->setObjectName(QStringLiteral("lbl_fre"));
        lbl_fre->setGeometry(QRect(660, 250, 54, 12));
        lbl_fre_choice = new QLabel(fft_dialog);
        lbl_fre_choice->setObjectName(QStringLiteral("lbl_fre_choice"));
        lbl_fre_choice->setGeometry(QRect(20, 370, 81, 16));
        lbl_size_choice = new QLabel(fft_dialog);
        lbl_size_choice->setObjectName(QStringLiteral("lbl_size_choice"));
        lbl_size_choice->setGeometry(QRect(20, 440, 101, 16));
        sld_fre = new QSlider(fft_dialog);
        sld_fre->setObjectName(QStringLiteral("sld_fre"));
        sld_fre->setGeometry(QRect(210, 370, 501, 19));
        sld_fre->setMaximum(1000);
        sld_fre->setValue(10);
        sld_fre->setOrientation(Qt::Horizontal);
        lbl_fre_0hz = new QLabel(fft_dialog);
        lbl_fre_0hz->setObjectName(QStringLiteral("lbl_fre_0hz"));
        lbl_fre_0hz->setGeometry(QRect(190, 390, 31, 16));
        lbl_fre_fs = new QLabel(fft_dialog);
        lbl_fre_fs->setObjectName(QStringLiteral("lbl_fre_fs"));
        lbl_fre_fs->setGeometry(QRect(720, 390, 31, 16));
        sld_size = new QSlider(fft_dialog);
        sld_size->setObjectName(QStringLiteral("sld_size"));
        sld_size->setGeometry(QRect(210, 440, 501, 19));
        sld_size->setMinimum(-100);
        sld_size->setMaximum(100);
        sld_size->setOrientation(Qt::Horizontal);
        lbl_size_neg2 = new QLabel(fft_dialog);
        lbl_size_neg2->setObjectName(QStringLiteral("lbl_size_neg2"));
        lbl_size_neg2->setGeometry(QRect(190, 460, 21, 16));
        lbl_size_2 = new QLabel(fft_dialog);
        lbl_size_2->setObjectName(QStringLiteral("lbl_size_2"));
        lbl_size_2->setGeometry(QRect(720, 460, 21, 16));
        btn_lowpass = new QPushButton(fft_dialog);
        btn_lowpass->setObjectName(QStringLiteral("btn_lowpass"));
        btn_lowpass->setGeometry(QRect(360, 400, 75, 23));
        btn_highpass = new QPushButton(fft_dialog);
        btn_highpass->setObjectName(QStringLiteral("btn_highpass"));
        btn_highpass->setGeometry(QRect(500, 400, 75, 23));
        btn_size_change = new QPushButton(fft_dialog);
        btn_size_change->setObjectName(QStringLiteral("btn_size_change"));
        btn_size_change->setGeometry(QRect(410, 480, 91, 23));
        lbl_fre_now = new QLabel(fft_dialog);
        lbl_fre_now->setObjectName(QStringLiteral("lbl_fre_now"));
        lbl_fre_now->setGeometry(QRect(110, 370, 61, 16));
        lbl_size_now = new QLabel(fft_dialog);
        lbl_size_now->setObjectName(QStringLiteral("lbl_size_now"));
        lbl_size_now->setGeometry(QRect(130, 440, 61, 16));

        retranslateUi(fft_dialog);

        QMetaObject::connectSlotsByName(fft_dialog);
    } // setupUi

    void retranslateUi(QDialog *fft_dialog)
    {
        fft_dialog->setWindowTitle(QApplication::translate("fft_dialog", "Dialog", nullptr));
        lbl_time->setText(QApplication::translate("fft_dialog", "\346\227\266\345\237\237", nullptr));
        lbl_fre->setText(QApplication::translate("fft_dialog", "\351\242\221\345\237\237", nullptr));
        lbl_fre_choice->setText(QApplication::translate("fft_dialog", "\346\273\244\346\263\242\351\242\221\347\216\207\351\200\211\346\213\251", nullptr));
        lbl_size_choice->setText(QApplication::translate("fft_dialog", "lg(\347\274\251\346\224\276\345\271\205\345\272\246\351\200\211\346\213\251)", nullptr));
        lbl_fre_0hz->setText(QApplication::translate("fft_dialog", "0Hz", nullptr));
        lbl_fre_fs->setText(QApplication::translate("fft_dialog", "fs/2", nullptr));
        lbl_size_neg2->setText(QApplication::translate("fft_dialog", "-2", nullptr));
        lbl_size_2->setText(QApplication::translate("fft_dialog", "2", nullptr));
        btn_lowpass->setText(QApplication::translate("fft_dialog", "\344\275\216\351\200\232\346\273\244\346\263\242", nullptr));
        btn_highpass->setText(QApplication::translate("fft_dialog", "\351\253\230\351\200\232\346\273\244\346\263\242", nullptr));
        btn_size_change->setText(QApplication::translate("fft_dialog", "\347\274\251\346\224\276\344\277\241\345\217\267", nullptr));
        lbl_fre_now->setText(QApplication::translate("fft_dialog", "10", nullptr));
        lbl_size_now->setText(QApplication::translate("fft_dialog", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fft_dialog: public Ui_fft_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFT_DIALOG_H
