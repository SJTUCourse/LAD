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
    QLabel *lbl_size_2_neg;
    QLabel *lbl_size_2_pos;
    QPushButton *btn_lowpass;
    QPushButton *btn_highpass;
    QPushButton *btn_size_change;
    QLabel *lbl_fre_now;
    QLabel *lbl_size_now;
    QLabel *lbl_chan_choice;
    QLabel *lbl_chan_now;
    QPushButton *btn_show;
    QLabel *lbl_fs_2_pos;
    QLabel *lbl_fs_2_neg;
    QLabel *lbl_20V_neg;
    QLabel *lbl_20V_pos;

    void setupUi(QDialog *fft_dialog)
    {
        if (fft_dialog->objectName().isEmpty())
            fft_dialog->setObjectName(QStringLiteral("fft_dialog"));
        fft_dialog->resize(762, 520);
        fft_dialog->setMaximumSize(QSize(762, 520));
        fre_Frame = new QFrame(fft_dialog);
        fre_Frame->setObjectName(QStringLiteral("fre_Frame"));
        fre_Frame->setGeometry(QRect(70, 10, 621, 150));
        fre_Frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        fre_Frame->setFrameShape(QFrame::StyledPanel);
        fre_Frame->setFrameShadow(QFrame::Raised);
        Time_Frame = new QFrame(fft_dialog);
        Time_Frame->setObjectName(QStringLiteral("Time_Frame"));
        Time_Frame->setGeometry(QRect(70, 200, 621, 150));
        Time_Frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        Time_Frame->setFrameShape(QFrame::StyledPanel);
        Time_Frame->setFrameShadow(QFrame::Raised);
        lbl_time = new QLabel(fft_dialog);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(710, 270, 31, 16));
        lbl_fre = new QLabel(fft_dialog);
        lbl_fre->setObjectName(QStringLiteral("lbl_fre"));
        lbl_fre->setGeometry(QRect(710, 80, 31, 16));
        lbl_fre_choice = new QLabel(fft_dialog);
        lbl_fre_choice->setObjectName(QStringLiteral("lbl_fre_choice"));
        lbl_fre_choice->setGeometry(QRect(20, 380, 81, 16));
        lbl_size_choice = new QLabel(fft_dialog);
        lbl_size_choice->setObjectName(QStringLiteral("lbl_size_choice"));
        lbl_size_choice->setGeometry(QRect(20, 450, 101, 16));
        sld_fre = new QSlider(fft_dialog);
        sld_fre->setObjectName(QStringLiteral("sld_fre"));
        sld_fre->setGeometry(QRect(210, 380, 501, 19));
        sld_fre->setMaximum(1000);
        sld_fre->setValue(1000);
        sld_fre->setOrientation(Qt::Horizontal);
        lbl_fre_0hz = new QLabel(fft_dialog);
        lbl_fre_0hz->setObjectName(QStringLiteral("lbl_fre_0hz"));
        lbl_fre_0hz->setGeometry(QRect(190, 400, 31, 16));
        lbl_fre_fs = new QLabel(fft_dialog);
        lbl_fre_fs->setObjectName(QStringLiteral("lbl_fre_fs"));
        lbl_fre_fs->setGeometry(QRect(720, 400, 31, 16));
        sld_size = new QSlider(fft_dialog);
        sld_size->setObjectName(QStringLiteral("sld_size"));
        sld_size->setGeometry(QRect(210, 450, 501, 19));
        sld_size->setMinimum(-100);
        sld_size->setMaximum(100);
        sld_size->setOrientation(Qt::Horizontal);
        lbl_size_2_neg = new QLabel(fft_dialog);
        lbl_size_2_neg->setObjectName(QStringLiteral("lbl_size_2_neg"));
        lbl_size_2_neg->setGeometry(QRect(190, 460, 21, 16));
        lbl_size_2_pos = new QLabel(fft_dialog);
        lbl_size_2_pos->setObjectName(QStringLiteral("lbl_size_2_pos"));
        lbl_size_2_pos->setGeometry(QRect(720, 460, 21, 16));
        btn_lowpass = new QPushButton(fft_dialog);
        btn_lowpass->setObjectName(QStringLiteral("btn_lowpass"));
        btn_lowpass->setGeometry(QRect(284, 410, 91, 23));
        btn_highpass = new QPushButton(fft_dialog);
        btn_highpass->setObjectName(QStringLiteral("btn_highpass"));
        btn_highpass->setGeometry(QRect(410, 410, 91, 23));
        btn_size_change = new QPushButton(fft_dialog);
        btn_size_change->setObjectName(QStringLiteral("btn_size_change"));
        btn_size_change->setGeometry(QRect(410, 480, 91, 23));
        lbl_fre_now = new QLabel(fft_dialog);
        lbl_fre_now->setObjectName(QStringLiteral("lbl_fre_now"));
        lbl_fre_now->setGeometry(QRect(110, 380, 51, 16));
        lbl_size_now = new QLabel(fft_dialog);
        lbl_size_now->setObjectName(QStringLiteral("lbl_size_now"));
        lbl_size_now->setGeometry(QRect(110, 440, 61, 16));
        lbl_chan_choice = new QLabel(fft_dialog);
        lbl_chan_choice->setObjectName(QStringLiteral("lbl_chan_choice"));
        lbl_chan_choice->setGeometry(QRect(20, 410, 81, 16));
        lbl_chan_now = new QLabel(fft_dialog);
        lbl_chan_now->setObjectName(QStringLiteral("lbl_chan_now"));
        lbl_chan_now->setGeometry(QRect(110, 410, 16, 16));
        btn_show = new QPushButton(fft_dialog);
        btn_show->setObjectName(QStringLiteral("btn_show"));
        btn_show->setGeometry(QRect(530, 410, 91, 23));
        lbl_fs_2_pos = new QLabel(fft_dialog);
        lbl_fs_2_pos->setObjectName(QStringLiteral("lbl_fs_2_pos"));
        lbl_fs_2_pos->setGeometry(QRect(660, 170, 31, 16));
        lbl_fs_2_neg = new QLabel(fft_dialog);
        lbl_fs_2_neg->setObjectName(QStringLiteral("lbl_fs_2_neg"));
        lbl_fs_2_neg->setGeometry(QRect(80, 170, 31, 16));
        lbl_20V_neg = new QLabel(fft_dialog);
        lbl_20V_neg->setObjectName(QStringLiteral("lbl_20V_neg"));
        lbl_20V_neg->setGeometry(QRect(30, 340, 31, 16));
        lbl_20V_pos = new QLabel(fft_dialog);
        lbl_20V_pos->setObjectName(QStringLiteral("lbl_20V_pos"));
        lbl_20V_pos->setGeometry(QRect(30, 200, 31, 16));

        retranslateUi(fft_dialog);

        QMetaObject::connectSlotsByName(fft_dialog);
    } // setupUi

    void retranslateUi(QDialog *fft_dialog)
    {
        fft_dialog->setWindowTitle(QApplication::translate("fft_dialog", "Dialog", nullptr));
        lbl_time->setText(QApplication::translate("fft_dialog", "\346\227\266\345\237\237", nullptr));
        lbl_fre->setText(QApplication::translate("fft_dialog", "\351\242\221\345\237\237", nullptr));
        lbl_fre_choice->setText(QApplication::translate("fft_dialog", "\346\273\244\346\263\242\351\242\221\347\216\207\351\200\211\346\213\251", nullptr));
        lbl_size_choice->setText(QApplication::translate("fft_dialog", "lg(\347\274\251\346\224\276\345\271\205\345\272\246)", nullptr));
        lbl_fre_0hz->setText(QApplication::translate("fft_dialog", "0Hz", nullptr));
        lbl_fre_fs->setText(QApplication::translate("fft_dialog", "fs/2", nullptr));
        lbl_size_2_neg->setText(QApplication::translate("fft_dialog", "-2", nullptr));
        lbl_size_2_pos->setText(QApplication::translate("fft_dialog", "2", nullptr));
        btn_lowpass->setText(QApplication::translate("fft_dialog", "\344\275\216\351\200\232\346\273\244\346\263\242", nullptr));
        btn_highpass->setText(QApplication::translate("fft_dialog", "\351\253\230\351\200\232\346\273\244\346\263\242", nullptr));
        btn_size_change->setText(QApplication::translate("fft_dialog", "\347\274\251\346\224\276\344\277\241\345\217\267", nullptr));
        lbl_fre_now->setText(QApplication::translate("fft_dialog", "50", nullptr));
        lbl_size_now->setText(QApplication::translate("fft_dialog", "1", nullptr));
        lbl_chan_choice->setText(QApplication::translate("fft_dialog", "\345\275\223\345\211\215\351\200\211\346\213\251\351\200\232\351\201\223", nullptr));
        lbl_chan_now->setText(QApplication::translate("fft_dialog", "0", nullptr));
        btn_show->setText(QApplication::translate("fft_dialog", "\344\277\241\345\217\267\346\230\276\347\244\272", nullptr));
        lbl_fs_2_pos->setText(QApplication::translate("fft_dialog", "fs/2", nullptr));
        lbl_fs_2_neg->setText(QApplication::translate("fft_dialog", "-fs/2", nullptr));
        lbl_20V_neg->setText(QApplication::translate("fft_dialog", "-20V", nullptr));
        lbl_20V_pos->setText(QApplication::translate("fft_dialog", " 20V", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fft_dialog: public Ui_fft_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFT_DIALOG_H
