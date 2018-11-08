/********************************************************************************
** Form generated from reading UI file 'configuredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREDIALOG_H
#define UI_CONFIGUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDialog
{
public:
    QComboBox *cmbDevice;
    QLabel *lblDevice;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QLabel *lblProfile;
    QPushButton *btnBrowse;
    QLineEdit *txtProfilePath;

    void setupUi(QDialog *ConfigureDialog)
    {
        if (ConfigureDialog->objectName().isEmpty())
            ConfigureDialog->setObjectName(QStringLiteral("ConfigureDialog"));
        ConfigureDialog->setEnabled(true);
        ConfigureDialog->resize(322, 152);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfigureDialog->sizePolicy().hasHeightForWidth());
        ConfigureDialog->setSizePolicy(sizePolicy);
        ConfigureDialog->setSizeGripEnabled(false);
        cmbDevice = new QComboBox(ConfigureDialog);
        cmbDevice->setObjectName(QStringLiteral("cmbDevice"));
        cmbDevice->setGeometry(QRect(70, 20, 221, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmbDevice->sizePolicy().hasHeightForWidth());
        cmbDevice->setSizePolicy(sizePolicy1);
        cmbDevice->setMinimumSize(QSize(221, 21));
        cmbDevice->setLayoutDirection(Qt::LeftToRight);
        lblDevice = new QLabel(ConfigureDialog);
        lblDevice->setObjectName(QStringLiteral("lblDevice"));
        lblDevice->setGeometry(QRect(20, 20, 51, 22));
        sizePolicy.setHeightForWidth(lblDevice->sizePolicy().hasHeightForWidth());
        lblDevice->setSizePolicy(sizePolicy);
        lblDevice->setMinimumSize(QSize(51, 22));
        btnOK = new QPushButton(ConfigureDialog);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(110, 110, 75, 23));
        btnCancel = new QPushButton(ConfigureDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(200, 110, 75, 23));
        btnCancel->setAutoDefault(false);
        lblProfile = new QLabel(ConfigureDialog);
        lblProfile->setObjectName(QStringLiteral("lblProfile"));
        lblProfile->setGeometry(QRect(20, 70, 51, 21));
        sizePolicy.setHeightForWidth(lblProfile->sizePolicy().hasHeightForWidth());
        lblProfile->setSizePolicy(sizePolicy);
        btnBrowse = new QPushButton(ConfigureDialog);
        btnBrowse->setObjectName(QStringLiteral("btnBrowse"));
        btnBrowse->setGeometry(QRect(240, 70, 51, 23));
        txtProfilePath = new QLineEdit(ConfigureDialog);
        txtProfilePath->setObjectName(QStringLiteral("txtProfilePath"));
        txtProfilePath->setGeometry(QRect(72, 70, 151, 20));
#ifndef QT_NO_SHORTCUT
        lblDevice->setBuddy(cmbDevice);
        lblProfile->setBuddy(cmbDevice);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbDevice, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);

        retranslateUi(ConfigureDialog);

        QMetaObject::connectSlotsByName(ConfigureDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureDialog)
    {
        ConfigureDialog->setWindowTitle(QApplication::translate("ConfigureDialog", "Static DI - Configuration", nullptr));
        lblDevice->setText(QApplication::translate("ConfigureDialog", "Device:", nullptr));
        btnOK->setText(QApplication::translate("ConfigureDialog", "OK", nullptr));
        btnCancel->setText(QApplication::translate("ConfigureDialog", "Cancel", nullptr));
        lblProfile->setText(QApplication::translate("ConfigureDialog", "Profile:", nullptr));
        btnBrowse->setText(QApplication::translate("ConfigureDialog", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureDialog: public Ui_ConfigureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREDIALOG_H
