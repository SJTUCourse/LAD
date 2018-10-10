/********************************************************************************
** Form generated from reading UI file 'ai_instant.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AI_INSTANT_H
#define UI_AI_INSTANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_AI_InstantFrame
{
public:
    QLabel *lblYCoordinateMax;
    QLabel *lblYCoordinateMid;
    QLabel *lblYCoordinateMin;
    QFrame *graphFrame;
    QLabel *lblXCoordinateStart;
    QListWidget *listWidget;
    QLabel *lblInterval;
    QLineEdit *edtTimeValue;
    QLabel *lblTimeUnit;
    QSlider *sldTimerValue;
    QPushButton *btnConfigure;
    QPushButton *btnStart;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QSlider *sldXscale;
    QSlider *sldYscale;
    QLabel *lblXScale;
    QLabel *lblYScale;
    QLabel *lblXCoordinateEnd;
    QLineEdit *edtTimeValue_scale;
    QLineEdit *edtAmp_scale_min;
    QLineEdit *edtAmp_scale_max;

    void setupUi(QDialog *AI_InstantFrame)
    {
        if (AI_InstantFrame->objectName().isEmpty())
            AI_InstantFrame->setObjectName(QStringLiteral("AI_InstantFrame"));
        AI_InstantFrame->resize(762, 520);
        AI_InstantFrame->setMinimumSize(QSize(762, 520));
        AI_InstantFrame->setMaximumSize(QSize(762, 520));
        AI_InstantFrame->setAutoFillBackground(true);
        lblYCoordinateMax = new QLabel(AI_InstantFrame);
        lblYCoordinateMax->setObjectName(QStringLiteral("lblYCoordinateMax"));
        lblYCoordinateMax->setGeometry(QRect(80, 40, 20, 20));
        lblYCoordinateMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblYCoordinateMid = new QLabel(AI_InstantFrame);
        lblYCoordinateMid->setObjectName(QStringLiteral("lblYCoordinateMid"));
        lblYCoordinateMid->setGeometry(QRect(50, 200, 46, 16));
        lblYCoordinateMid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblYCoordinateMin = new QLabel(AI_InstantFrame);
        lblYCoordinateMin->setObjectName(QStringLiteral("lblYCoordinateMin"));
        lblYCoordinateMin->setGeometry(QRect(80, 360, 20, 20));
        lblYCoordinateMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        graphFrame = new QFrame(AI_InstantFrame);
        graphFrame->setObjectName(QStringLiteral("graphFrame"));
        graphFrame->setGeometry(QRect(110, 40, 621, 340));
        graphFrame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        graphFrame->setFrameShape(QFrame::StyledPanel);
        graphFrame->setFrameShadow(QFrame::Raised);
        lblXCoordinateStart = new QLabel(AI_InstantFrame);
        lblXCoordinateStart->setObjectName(QStringLiteral("lblXCoordinateStart"));
        lblXCoordinateStart->setGeometry(QRect(100, 390, 41, 16));
        lblXCoordinateStart->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        listWidget = new QListWidget(AI_InstantFrame);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(50, 420, 371, 81));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setProperty("isWrapping", QVariant(true));
        lblInterval = new QLabel(AI_InstantFrame);
        lblInterval->setObjectName(QStringLiteral("lblInterval"));
        lblInterval->setGeometry(QRect(539, 425, 101, 16));
        lblInterval->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        edtTimeValue = new QLineEdit(AI_InstantFrame);
        edtTimeValue->setObjectName(QStringLiteral("edtTimeValue"));
        edtTimeValue->setGeometry(QRect(643, 423, 45, 22));
        edtTimeValue->setAlignment(Qt::AlignCenter);
        edtTimeValue->setReadOnly(true);
        lblTimeUnit = new QLabel(AI_InstantFrame);
        lblTimeUnit->setObjectName(QStringLiteral("lblTimeUnit"));
        lblTimeUnit->setGeometry(QRect(695, 423, 16, 16));
        lblTimeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        sldTimerValue = new QSlider(AI_InstantFrame);
        sldTimerValue->setObjectName(QStringLiteral("sldTimerValue"));
        sldTimerValue->setEnabled(true);
        sldTimerValue->setGeometry(QRect(540, 450, 171, 21));
        sldTimerValue->setMinimum(10);
        sldTimerValue->setMaximum(1000);
        sldTimerValue->setSingleStep(10);
        sldTimerValue->setValue(10);
        sldTimerValue->setOrientation(Qt::Horizontal);
        sldTimerValue->setTickPosition(QSlider::NoTicks);
        btnConfigure = new QPushButton(AI_InstantFrame);
        btnConfigure->setObjectName(QStringLiteral("btnConfigure"));
        btnConfigure->setEnabled(true);
        btnConfigure->setGeometry(QRect(440, 440, 81, 23));
        btnConfigure->setAutoDefault(false);
        btnStart = new QPushButton(AI_InstantFrame);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setEnabled(true);
        btnStart->setGeometry(QRect(440, 480, 81, 23));
        btnPause = new QPushButton(AI_InstantFrame);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setEnabled(false);
        btnPause->setGeometry(QRect(540, 480, 81, 23));
        btnStop = new QPushButton(AI_InstantFrame);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setEnabled(false);
        btnStop->setGeometry(QRect(633, 480, 75, 23));
        btnStop->setAutoDefault(false);
        sldXscale = new QSlider(AI_InstantFrame);
        sldXscale->setObjectName(QStringLiteral("sldXscale"));
        sldXscale->setEnabled(true);
        sldXscale->setGeometry(QRect(270, 390, 391, 21));
        sldXscale->setMinimum(1);
        sldXscale->setMaximum(50);
        sldXscale->setSingleStep(10);
        sldXscale->setValue(10);
        sldXscale->setOrientation(Qt::Horizontal);
        sldXscale->setTickPosition(QSlider::NoTicks);
        sldYscale = new QSlider(AI_InstantFrame);
        sldYscale->setObjectName(QStringLiteral("sldYscale"));
        sldYscale->setGeometry(QRect(20, 40, 20, 331));
        sldYscale->setMinimum(1);
        sldYscale->setMaximum(50);
        sldYscale->setSliderPosition(10);
        sldYscale->setOrientation(Qt::Vertical);
        lblXScale = new QLabel(AI_InstantFrame);
        lblXScale->setObjectName(QStringLiteral("lblXScale"));
        lblXScale->setGeometry(QRect(150, 390, 121, 20));
        lblYScale = new QLabel(AI_InstantFrame);
        lblYScale->setObjectName(QStringLiteral("lblYScale"));
        lblYScale->setGeometry(QRect(10, 10, 101, 20));
        lblXCoordinateEnd = new QLabel(AI_InstantFrame);
        lblXCoordinateEnd->setObjectName(QStringLiteral("lblXCoordinateEnd"));
        lblXCoordinateEnd->setGeometry(QRect(730, 390, 31, 16));
        lblXCoordinateEnd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        edtTimeValue_scale = new QLineEdit(AI_InstantFrame);
        edtTimeValue_scale->setObjectName(QStringLiteral("edtTimeValue_scale"));
        edtTimeValue_scale->setGeometry(QRect(680, 390, 45, 22));
        edtTimeValue_scale->setAlignment(Qt::AlignCenter);
        edtTimeValue_scale->setReadOnly(true);
        edtAmp_scale_min = new QLineEdit(AI_InstantFrame);
        edtAmp_scale_min->setObjectName(QStringLiteral("edtAmp_scale_min"));
        edtAmp_scale_min->setGeometry(QRect(40, 360, 45, 22));
        edtAmp_scale_min->setAlignment(Qt::AlignCenter);
        edtAmp_scale_min->setReadOnly(true);
        edtAmp_scale_max = new QLineEdit(AI_InstantFrame);
        edtAmp_scale_max->setObjectName(QStringLiteral("edtAmp_scale_max"));
        edtAmp_scale_max->setGeometry(QRect(40, 40, 45, 22));
        edtAmp_scale_max->setAlignment(Qt::AlignCenter);
        edtAmp_scale_max->setReadOnly(true);
        QWidget::setTabOrder(btnConfigure, btnStart);
        QWidget::setTabOrder(btnStart, btnPause);
        QWidget::setTabOrder(btnPause, btnStop);
        QWidget::setTabOrder(btnStop, sldTimerValue);
        QWidget::setTabOrder(sldTimerValue, edtTimeValue);
        QWidget::setTabOrder(edtTimeValue, listWidget);

        retranslateUi(AI_InstantFrame);

        QMetaObject::connectSlotsByName(AI_InstantFrame);
    } // setupUi

    void retranslateUi(QDialog *AI_InstantFrame)
    {
        AI_InstantFrame->setWindowTitle(QApplication::translate("AI_InstantFrame", "AI_Instant", nullptr));
        lblYCoordinateMax->setText(QApplication::translate("AI_InstantFrame", "V", nullptr));
        lblYCoordinateMid->setText(QApplication::translate("AI_InstantFrame", "0", nullptr));
        lblYCoordinateMin->setText(QApplication::translate("AI_InstantFrame", "V", nullptr));
        lblXCoordinateStart->setText(QApplication::translate("AI_InstantFrame", "0Sec", nullptr));
        lblInterval->setText(QApplication::translate("AI_InstantFrame", "Sample Interval:", nullptr));
        edtTimeValue->setText(QApplication::translate("AI_InstantFrame", "10", nullptr));
        lblTimeUnit->setText(QApplication::translate("AI_InstantFrame", "ms", nullptr));
        btnConfigure->setText(QApplication::translate("AI_InstantFrame", "Configure", nullptr));
        btnStart->setText(QApplication::translate("AI_InstantFrame", "Start", nullptr));
        btnPause->setText(QApplication::translate("AI_InstantFrame", "Pause", nullptr));
        btnStop->setText(QApplication::translate("AI_InstantFrame", "Stop", nullptr));
        lblXScale->setText(QApplication::translate("AI_InstantFrame", "Change Time Scale", nullptr));
        lblYScale->setText(QApplication::translate("AI_InstantFrame", "Change Amp Scale", nullptr));
        lblXCoordinateEnd->setText(QApplication::translate("AI_InstantFrame", "Sec", nullptr));
        edtTimeValue_scale->setText(QApplication::translate("AI_InstantFrame", "10", nullptr));
        edtAmp_scale_min->setText(QApplication::translate("AI_InstantFrame", "-10", nullptr));
        edtAmp_scale_max->setText(QApplication::translate("AI_InstantFrame", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AI_InstantFrame: public Ui_AI_InstantFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AI_INSTANT_H
