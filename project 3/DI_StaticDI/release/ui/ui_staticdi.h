/********************************************************************************
** Form generated from reading UI file 'staticdi.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICDI_H
#define UI_STATICDI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaticDIClass
{
public:
    QFrame *background;
    QPushButton *btnConfig;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFrame *Time_Frame;
    QLabel *lbl_4_5;
    QLabel *lbl_neg_1_5;
    QComboBox *lst_mode;
    QLabel *label_mode;
    QPushButton *btn_next;

    void setupUi(QDialog *StaticDIClass)
    {
        if (StaticDIClass->objectName().isEmpty())
            StaticDIClass->setObjectName(QStringLiteral("StaticDIClass"));
        StaticDIClass->resize(470, 432);
        StaticDIClass->setMinimumSize(QSize(470, 432));
        StaticDIClass->setMaximumSize(QSize(470, 432));
        background = new QFrame(StaticDIClass);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(286, -4, 191, 91));
        background->setMinimumSize(QSize(191, 91));
        background->setAutoFillBackground(false);
        background->setStyleSheet(QStringLiteral("QFrame#background{background-image:url(:/StaticDI/Resources/Background.png)}"));
        background->setFrameShape(QFrame::StyledPanel);
        background->setFrameShadow(QFrame::Raised);
        btnConfig = new QPushButton(StaticDIClass);
        btnConfig->setObjectName(QStringLiteral("btnConfig"));
        btnConfig->setGeometry(QRect(161, 398, 100, 23));
        btnConfig->setMinimumSize(QSize(75, 23));
        label = new QLabel(StaticDIClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(27, 52, 361, 16));
        label->setMinimumSize(QSize(361, 16));
        label->setMaximumSize(QSize(361, 16));
        scrollArea = new QScrollArea(StaticDIClass);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(26, 71, 370, 317));
        scrollArea->setMinimumSize(QSize(369, 317));
        scrollArea->setMaximumSize(QSize(370, 317));
        scrollArea->setSizeIncrement(QSize(369, 317));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 341, 0));
        scrollAreaWidgetContents->setMinimumSize(QSize(341, 0));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Time_Frame = new QFrame(StaticDIClass);
        Time_Frame->setObjectName(QStringLiteral("Time_Frame"));
        Time_Frame->setGeometry(QRect(26, 230, 370, 161));
        Time_Frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        Time_Frame->setFrameShape(QFrame::StyledPanel);
        Time_Frame->setFrameShadow(QFrame::Raised);
        lbl_4_5 = new QLabel(StaticDIClass);
        lbl_4_5->setObjectName(QStringLiteral("lbl_4_5"));
        lbl_4_5->setGeometry(QRect(400, 230, 54, 12));
        lbl_neg_1_5 = new QLabel(StaticDIClass);
        lbl_neg_1_5->setObjectName(QStringLiteral("lbl_neg_1_5"));
        lbl_neg_1_5->setGeometry(QRect(400, 380, 54, 12));
        lst_mode = new QComboBox(StaticDIClass);
        lst_mode->addItem(QString());
        lst_mode->addItem(QString());
        lst_mode->addItem(QString());
        lst_mode->addItem(QString());
        lst_mode->setObjectName(QStringLiteral("lst_mode"));
        lst_mode->setGeometry(QRect(130, 200, 101, 20));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lst_mode->sizePolicy().hasHeightForWidth());
        lst_mode->setSizePolicy(sizePolicy);
        label_mode = new QLabel(StaticDIClass);
        label_mode->setObjectName(QStringLiteral("label_mode"));
        label_mode->setGeometry(QRect(30, 200, 101, 21));
        label_mode->setStyleSheet(QStringLiteral("font: 10pt \"Microsoft New Tai Lue\";"));
        btn_next = new QPushButton(StaticDIClass);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setGeometry(QRect(250, 200, 100, 23));
        btn_next->setMinimumSize(QSize(75, 23));

        retranslateUi(StaticDIClass);

        QMetaObject::connectSlotsByName(StaticDIClass);
    } // setupUi

    void retranslateUi(QDialog *StaticDIClass)
    {
        StaticDIClass->setWindowTitle(QApplication::translate("StaticDIClass", "Static DI", nullptr));
        btnConfig->setText(QApplication::translate("StaticDIClass", "Configure", nullptr));
        label->setText(QApplication::translate("StaticDIClass", "Port No.    Bit7                          4            3                             0          Hex", nullptr));
        lbl_4_5->setText(QApplication::translate("StaticDIClass", "4.5V", nullptr));
        lbl_neg_1_5->setText(QApplication::translate("StaticDIClass", "-1.5V", nullptr));
        lst_mode->setItemText(0, QApplication::translate("StaticDIClass", "continuous", nullptr));
        lst_mode->setItemText(1, QApplication::translate("StaticDIClass", "5s", nullptr));
        lst_mode->setItemText(2, QApplication::translate("StaticDIClass", "10s", nullptr));
        lst_mode->setItemText(3, QApplication::translate("StaticDIClass", "20s", nullptr));

        label_mode->setText(QApplication::translate("StaticDIClass", "Output Mode \357\274\232", nullptr));
        btn_next->setText(QApplication::translate("StaticDIClass", "Next output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaticDIClass: public Ui_StaticDIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICDI_H
