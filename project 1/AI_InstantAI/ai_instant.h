#ifndef AI_INSTANT_H
#define AI_INSTANT_H

#include <QtWidgets/QDialog>
#include <QtCore/QtCore>
#include <QTimer>
#include "ui_ai_instant.h"
#include "../common/simplegraph.h"
#include "configuredialog.h"
#include <QtCore/QCoreApplication>
#include <QFile>
#include <QString>
#include <QTextStream>
#include "fft_dialog.h"

const QString FILE_PATH_0("F:\\QT\\MyProgects\\project_1\\file\\channel_0.txt");
const QString FILE_PATH_1("F:\\QT\\MyProgects\\project_1\\file\\channel_1.txt");
const QString FILE_PATH_2("F:\\QT\\MyProgects\\project_1\\file\\channel_2.txt");
const QString FILE_PATH_3("F:\\QT\\MyProgects\\project_1\\file\\channel_3.txt");
const QString FILE_PATH_4("F:\\QT\\MyProgects\\project_1\\file\\channel_4.txt");
const QString FILE_PATH_5("F:\\QT\\MyProgects\\project_1\\file\\channel_5.txt");
const QString FILE_PATH_6("F:\\QT\\MyProgects\\project_1\\file\\channel_6.txt");
const QString FILE_PATH_7("F:\\QT\\MyProgects\\project_1\\file\\channel_7.txt");

class AI_Instant : public QDialog
{
	Q_OBJECT


public:
    AI_Instant(QWidget *parent = nullptr, Qt::WindowFlags flags = nullptr);
    ~AI_Instant();
	void Initialize();
	void ConfigureDevice();
	void ConfigureGraph();
	void CheckError(ErrorCode errorCode);
	void RefreshList();
	void SetConfigureDialog(ConfigureDialog *dialog){this->configDialog = dialog;}
	void SetConfigureParameter(ConfigureParameter value){this->configure = value;}

private:
	Ui::AI_InstantFrame ui;
	SimpleGraph *graph;
	ConfigureDialog *configDialog;
	ConfigureParameter configure;
    fft_dialog *fre_graph;
	InstantAiCtrl *instantAiCtrl;
	double scaledData[16];
    QTimer *timer;
    void mousePressEvent(QMouseEvent *event);

private slots:
    void TimerTicked();
	void SliderValueChanged(int value);
    void SliderXScaleChanged(int value);
    void SliderYScaleChanged(int value);
	void ButtonStartClicked();
	void ButtonConfigureClicked();
	void ButttonPauseClicked();
	void ButtonStopClicked();
    void ButtonFFTClicked();
    void CmbIndexChanged(int);
};

#endif // AI_INSTANT_H
