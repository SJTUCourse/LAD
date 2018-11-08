/********************************************************************************
** Form generated from reading UI file 'staticao.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICAO_H
#define UI_STATICAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_StaticAOClass
{
public:
    QFrame *background;
    QPushButton *BtnSineA;
    QPushButton *BtnTriangleA;
    QPushButton *BtnSquareA;
    QPushButton *BtnSineB;
    QPushButton *BtnTriangleB;
    QPushButton *BtnSquareB;
    QPushButton *BtnManualB;
    QPushButton *BtnManualA;
    QLineEdit *txtboxHiLevelA;
    QLineEdit *txtboxLoLevelA;
    QLineEdit *txtboxValueA;
    QLineEdit *txtboxHiLevelB;
    QLineEdit *txtboxLoLevelB;
    QLineEdit *txtboxValueB;
    QLabel *chLabelA;
    QLabel *chLabelB;
    QSlider *timerTrackBar;
    QLabel *timerFreqLabel;
    QPushButton *btnConfigure;
    QFrame *Time_Frame;
    QPushButton *btn_Pause;
    QPushButton *btn_Stop;
    QPushButton *btn_Start;
    QPushButton *btn_Browse;
    QLabel *txtProfilePath;
    QLabel *label;
    QComboBox *lst_mode;
    QLabel *label_mode;
    QLabel *label_fre;
    QLabel *lbl_fre;

    void setupUi(QDialog *StaticAOClass)
    {
        if (StaticAOClass->objectName().isEmpty())
            StaticAOClass->setObjectName(QStringLiteral("StaticAOClass"));
        StaticAOClass->resize(870, 480);
        StaticAOClass->setMinimumSize(QSize(389, 447));
        StaticAOClass->setMaximumSize(QSize(1041, 600));
        background = new QFrame(StaticAOClass);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(-1, -3, 870, 480));
        background->setMinimumSize(QSize(0, 451));
        background->setAutoFillBackground(false);
        background->setStyleSheet(QStringLiteral("QFrame#background{background-image:url(:/StaticAO/Resources/AO.png)}"));
        background->setFrameShape(QFrame::StyledPanel);
        background->setFrameShadow(QFrame::Raised);
        BtnSineA = new QPushButton(background);
        BtnSineA->setObjectName(QStringLiteral("BtnSineA"));
        BtnSineA->setGeometry(QRect(70, 124, 51, 51));
        BtnSineA->setMinimumSize(QSize(51, 51));
        BtnSineA->setMaximumSize(QSize(51, 51));
        BtnSineA->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/sine.png)"));
        BtnSineA->setCheckable(true);
        BtnSineA->setFlat(true);
        BtnTriangleA = new QPushButton(background);
        BtnTriangleA->setObjectName(QStringLiteral("BtnTriangleA"));
        BtnTriangleA->setGeometry(QRect(136, 124, 51, 51));
        BtnTriangleA->setMinimumSize(QSize(51, 51));
        BtnTriangleA->setMaximumSize(QSize(51, 51));
        BtnTriangleA->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/triangle.png)"));
        BtnTriangleA->setCheckable(true);
        BtnTriangleA->setFlat(true);
        BtnSquareA = new QPushButton(background);
        BtnSquareA->setObjectName(QStringLiteral("BtnSquareA"));
        BtnSquareA->setGeometry(QRect(203, 125, 51, 51));
        BtnSquareA->setMinimumSize(QSize(51, 51));
        BtnSquareA->setMaximumSize(QSize(51, 51));
        BtnSquareA->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/square.png)"));
        BtnSquareA->setCheckable(true);
        BtnSquareA->setFlat(true);
        BtnSineB = new QPushButton(background);
        BtnSineB->setObjectName(QStringLiteral("BtnSineB"));
        BtnSineB->setGeometry(QRect(70, 301, 51, 51));
        BtnSineB->setMinimumSize(QSize(51, 51));
        BtnSineB->setMaximumSize(QSize(51, 51));
        BtnSineB->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/sine.png)"));
        BtnSineB->setCheckable(true);
        BtnSineB->setFlat(true);
        BtnTriangleB = new QPushButton(background);
        BtnTriangleB->setObjectName(QStringLiteral("BtnTriangleB"));
        BtnTriangleB->setGeometry(QRect(139, 302, 51, 51));
        BtnTriangleB->setMinimumSize(QSize(51, 51));
        BtnTriangleB->setMaximumSize(QSize(51, 51));
        BtnTriangleB->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/triangle.png)"));
        BtnTriangleB->setCheckable(true);
        BtnTriangleB->setFlat(true);
        BtnSquareB = new QPushButton(background);
        BtnSquareB->setObjectName(QStringLiteral("BtnSquareB"));
        BtnSquareB->setGeometry(QRect(207, 303, 51, 51));
        BtnSquareB->setMinimumSize(QSize(51, 51));
        BtnSquareB->setMaximumSize(QSize(51, 51));
        BtnSquareB->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/square.png)"));
        BtnSquareB->setCheckable(true);
        BtnSquareB->setFlat(true);
        BtnManualB = new QPushButton(background);
        BtnManualB->setObjectName(QStringLiteral("BtnManualB"));
        BtnManualB->setGeometry(QRect(288, 303, 51, 51));
        BtnManualB->setMinimumSize(QSize(51, 51));
        BtnManualB->setMaximumSize(QSize(51, 51));
        BtnManualB->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/manual.png)"));
        BtnManualB->setCheckable(false);
        BtnManualB->setFlat(true);
        BtnManualA = new QPushButton(background);
        BtnManualA->setObjectName(QStringLiteral("BtnManualA"));
        BtnManualA->setGeometry(QRect(290, 125, 51, 51));
        BtnManualA->setMinimumSize(QSize(51, 51));
        BtnManualA->setMaximumSize(QSize(51, 51));
        BtnManualA->setStyleSheet(QStringLiteral("background:url(:/StaticAO/Resources/manual.png)"));
        BtnManualA->setCheckable(false);
        BtnManualA->setFlat(true);
        txtboxHiLevelA = new QLineEdit(background);
        txtboxHiLevelA->setObjectName(QStringLiteral("txtboxHiLevelA"));
        txtboxHiLevelA->setGeometry(QRect(73, 90, 73, 20));
        txtboxHiLevelA->setMinimumSize(QSize(73, 20));
        txtboxHiLevelA->setMaximumSize(QSize(73, 20));
        txtboxLoLevelA = new QLineEdit(background);
        txtboxLoLevelA->setObjectName(QStringLiteral("txtboxLoLevelA"));
        txtboxLoLevelA->setGeometry(QRect(165, 90, 73, 20));
        txtboxLoLevelA->setMinimumSize(QSize(73, 20));
        txtboxLoLevelA->setMaximumSize(QSize(73, 20));
        txtboxValueA = new QLineEdit(background);
        txtboxValueA->setObjectName(QStringLiteral("txtboxValueA"));
        txtboxValueA->setGeometry(QRect(280, 90, 65, 20));
        txtboxValueA->setMinimumSize(QSize(65, 20));
        txtboxValueA->setMaximumSize(QSize(65, 20));
        txtboxHiLevelB = new QLineEdit(background);
        txtboxHiLevelB->setObjectName(QStringLiteral("txtboxHiLevelB"));
        txtboxHiLevelB->setGeometry(QRect(73, 269, 73, 20));
        txtboxHiLevelB->setMinimumSize(QSize(73, 20));
        txtboxHiLevelB->setMaximumSize(QSize(73, 20));
        txtboxLoLevelB = new QLineEdit(background);
        txtboxLoLevelB->setObjectName(QStringLiteral("txtboxLoLevelB"));
        txtboxLoLevelB->setGeometry(QRect(165, 267, 73, 20));
        txtboxLoLevelB->setMinimumSize(QSize(73, 20));
        txtboxLoLevelB->setMaximumSize(QSize(73, 20));
        txtboxValueB = new QLineEdit(background);
        txtboxValueB->setObjectName(QStringLiteral("txtboxValueB"));
        txtboxValueB->setGeometry(QRect(280, 267, 65, 20));
        txtboxValueB->setMinimumSize(QSize(65, 20));
        txtboxValueB->setMaximumSize(QSize(65, 20));
        chLabelA = new QLabel(background);
        chLabelA->setObjectName(QStringLiteral("chLabelA"));
        chLabelA->setGeometry(QRect(268, 34, 16, 16));
        chLabelA->setMinimumSize(QSize(16, 16));
        chLabelA->setMaximumSize(QSize(16, 16));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        chLabelA->setFont(font);
        chLabelA->setStyleSheet(QStringLiteral("color:rgb(255, 170, 0)"));
        chLabelA->setTextFormat(Qt::RichText);
        chLabelA->setAlignment(Qt::AlignCenter);
        chLabelB = new QLabel(background);
        chLabelB->setObjectName(QStringLiteral("chLabelB"));
        chLabelB->setGeometry(QRect(271, 211, 16, 16));
        chLabelB->setMinimumSize(QSize(16, 16));
        chLabelB->setMaximumSize(QSize(16, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        chLabelB->setFont(font1);
        chLabelB->setStyleSheet(QStringLiteral("color:rgb(255, 170, 0)"));
        chLabelB->setTextFormat(Qt::RichText);
        chLabelB->setAlignment(Qt::AlignCenter);
        timerTrackBar = new QSlider(background);
        timerTrackBar->setObjectName(QStringLiteral("timerTrackBar"));
        timerTrackBar->setGeometry(QRect(140, 403, 111, 21));
        timerTrackBar->setMinimum(5);
        timerTrackBar->setMaximum(1000);
        timerTrackBar->setPageStep(1);
        timerTrackBar->setValue(50);
        timerTrackBar->setOrientation(Qt::Horizontal);
        timerFreqLabel = new QLabel(background);
        timerFreqLabel->setObjectName(QStringLiteral("timerFreqLabel"));
        timerFreqLabel->setGeometry(QRect(253, 405, 41, 16));
        timerFreqLabel->setMinimumSize(QSize(41, 16));
        timerFreqLabel->setMaximumSize(QSize(41, 16));
        btnConfigure = new QPushButton(background);
        btnConfigure->setObjectName(QStringLiteral("btnConfigure"));
        btnConfigure->setGeometry(QRect(298, 401, 75, 23));
        btnConfigure->setMinimumSize(QSize(75, 23));
        btnConfigure->setMaximumSize(QSize(75, 23));
        Time_Frame = new QFrame(background);
        Time_Frame->setObjectName(QStringLiteral("Time_Frame"));
        Time_Frame->setGeometry(QRect(390, 50, 431, 301));
        Time_Frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        Time_Frame->setFrameShape(QFrame::StyledPanel);
        Time_Frame->setFrameShadow(QFrame::Raised);
        btn_Pause = new QPushButton(background);
        btn_Pause->setObjectName(QStringLiteral("btn_Pause"));
        btn_Pause->setGeometry(QRect(560, 420, 110, 23));
        btn_Pause->setMinimumSize(QSize(75, 23));
        btn_Pause->setMaximumSize(QSize(110, 23));
        btn_Stop = new QPushButton(background);
        btn_Stop->setObjectName(QStringLiteral("btn_Stop"));
        btn_Stop->setGeometry(QRect(700, 420, 110, 23));
        btn_Stop->setMinimumSize(QSize(75, 23));
        btn_Stop->setMaximumSize(QSize(110, 23));
        btn_Start = new QPushButton(background);
        btn_Start->setObjectName(QStringLiteral("btn_Start"));
        btn_Start->setGeometry(QRect(420, 420, 110, 23));
        btn_Start->setMinimumSize(QSize(75, 23));
        btn_Start->setMaximumSize(QSize(200, 23));
        btn_Browse = new QPushButton(background);
        btn_Browse->setObjectName(QStringLiteral("btn_Browse"));
        btn_Browse->setGeometry(QRect(730, 372, 75, 31));
        btn_Browse->setMinimumSize(QSize(75, 23));
        btn_Browse->setMaximumSize(QSize(600, 50));
        txtProfilePath = new QLabel(background);
        txtProfilePath->setObjectName(QStringLiteral("txtProfilePath"));
        txtProfilePath->setGeometry(QRect(460, 380, 241, 16));
        txtProfilePath->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(background);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 380, 54, 16));
        label->setStyleSheet(QStringLiteral("font: 10pt \"Microsoft New Tai Lue\";"));
        lst_mode = new QComboBox(background);
        lst_mode->addItem(QString());
        lst_mode->addItem(QString());
        lst_mode->addItem(QString());
        lst_mode->addItem(QString());
        lst_mode->addItem(QString());
        lst_mode->setObjectName(QStringLiteral("lst_mode"));
        lst_mode->setGeometry(QRect(490, 20, 101, 20));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lst_mode->sizePolicy().hasHeightForWidth());
        lst_mode->setSizePolicy(sizePolicy);
        label_mode = new QLabel(background);
        label_mode->setObjectName(QStringLiteral("label_mode"));
        label_mode->setGeometry(QRect(390, 20, 101, 21));
        label_mode->setStyleSheet(QStringLiteral("font: 10pt \"Microsoft New Tai Lue\";"));
        label_fre = new QLabel(background);
        label_fre->setObjectName(QStringLiteral("label_fre"));
        label_fre->setGeometry(QRect(40, 440, 201, 16));
        label_fre->setStyleSheet(QStringLiteral("font: 10pt \"Microsoft New Tai Lue\";"));
        lbl_fre = new QLabel(background);
        lbl_fre->setObjectName(QStringLiteral("lbl_fre"));
        lbl_fre->setGeometry(QRect(250, 440, 61, 16));
        lbl_fre->setStyleSheet(QStringLiteral("font: 10pt \"Microsoft New Tai Lue\";"));

        retranslateUi(StaticAOClass);

        QMetaObject::connectSlotsByName(StaticAOClass);
    } // setupUi

    void retranslateUi(QDialog *StaticAOClass)
    {
        StaticAOClass->setWindowTitle(QApplication::translate("StaticAOClass", "Static AO", nullptr));
        BtnSineA->setText(QString());
        BtnTriangleA->setText(QString());
        BtnSquareA->setText(QString());
        BtnSineB->setText(QString());
        BtnTriangleB->setText(QString());
        BtnSquareB->setText(QString());
        BtnManualB->setText(QString());
        BtnManualA->setText(QString());
        txtboxHiLevelA->setText(QApplication::translate("StaticAOClass", "5", nullptr));
        txtboxLoLevelA->setText(QApplication::translate("StaticAOClass", "-5", nullptr));
        txtboxValueA->setText(QApplication::translate("StaticAOClass", "2.5", nullptr));
        txtboxHiLevelB->setText(QApplication::translate("StaticAOClass", "5", nullptr));
        txtboxLoLevelB->setText(QApplication::translate("StaticAOClass", "-5", nullptr));
        txtboxValueB->setText(QApplication::translate("StaticAOClass", "2.5", nullptr));
        chLabelA->setText(QApplication::translate("StaticAOClass", "0", nullptr));
        chLabelB->setText(QApplication::translate("StaticAOClass", "1", nullptr));
        timerFreqLabel->setText(QApplication::translate("StaticAOClass", "50ms", nullptr));
        btnConfigure->setText(QApplication::translate("StaticAOClass", "Configure", nullptr));
        btn_Pause->setText(QApplication::translate("StaticAOClass", "Pause", nullptr));
        btn_Stop->setText(QApplication::translate("StaticAOClass", "Stop", nullptr));
        btn_Start->setText(QApplication::translate("StaticAOClass", "Start/Continue", nullptr));
        btn_Browse->setText(QApplication::translate("StaticAOClass", "Browse", nullptr));
        txtProfilePath->setText(QString());
        label->setText(QApplication::translate("StaticAOClass", "Path :", nullptr));
        lst_mode->setItemText(0, QApplication::translate("StaticAOClass", "continuous", nullptr));
        lst_mode->setItemText(1, QApplication::translate("StaticAOClass", "100", nullptr));
        lst_mode->setItemText(2, QApplication::translate("StaticAOClass", "200", nullptr));
        lst_mode->setItemText(3, QApplication::translate("StaticAOClass", "300", nullptr));
        lst_mode->setItemText(4, QApplication::translate("StaticAOClass", "400", nullptr));

        label_mode->setText(QApplication::translate("StaticAOClass", "Output Mode \357\274\232", nullptr));
        label_fre->setText(QApplication::translate("StaticAOClass", "The output frequency at present:", nullptr));
        lbl_fre->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StaticAOClass: public Ui_StaticAOClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICAO_H
