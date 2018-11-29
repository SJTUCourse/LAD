/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_dio;
    QPushButton *btn_ao;
    QPushButton *btn_ai;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_dio = new QPushButton(centralWidget);
        btn_dio->setObjectName(QStringLiteral("btn_dio"));
        btn_dio->setGeometry(QRect(140, 160, 100, 30));
        btn_ao = new QPushButton(centralWidget);
        btn_ao->setObjectName(QStringLiteral("btn_ao"));
        btn_ao->setGeometry(QRect(140, 110, 100, 30));
        btn_ai = new QPushButton(centralWidget);
        btn_ai->setObjectName(QStringLiteral("btn_ai"));
        btn_ai->setGeometry(QRect(140, 60, 100, 30));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_dio->setText(QApplication::translate("MainWindow", "DIO function", nullptr));
        btn_ao->setText(QApplication::translate("MainWindow", "AO function", nullptr));
        btn_ai->setText(QApplication::translate("MainWindow", "AI function", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
