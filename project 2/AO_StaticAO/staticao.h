#ifndef STATICAO_H
#define STATICAO_H

#include <QDialog>
#include <QTimer>
#include "ui_staticao.h"
#include "configuredialog.h"
#include "../common/WaveformGenerator.h"
#include "../common/simplegraph.h"
#include <QFile>
#include <QString>
#include <stdio.h>
#include <stdlib.h>
#include <QtCore/QCoreApplication>

class StaticAO : public QDialog
{
	Q_OBJECT

public:
	StaticAO(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~StaticAO();

	void Initialize();
	void ConfigureDevice();
	void CheckError(ErrorCode errorCode);
	void SetConfigureDialog(ConfigureDialog *dialog){this->configDialog = dialog;}
	void SetConfigureParameter(ConfigureParameter value){this->configure = value;}
	void ConfigurePanel();

    double xreal[1024],ximag[1024];

private:
	Ui::StaticAOClass ui;
	ConfigureDialog *configDialog;
	ConfigureParameter configure;
	InstantAoCtrl * instantAoCtrl;

	int channelStart;
    int channelCount;
    double dataScaled[2];
	WaveformParameter m_waveParam[2];
	WaveformGenerator *waveformGenerator;
	QPushButton* buttons[6];
	int m_wavePtIdx[2];
    bool m_waveSeled[2];
	QTimer *timer;
	QString strs[6];
	QButtonGroup* buttonGroup1;
	QButtonGroup* buttonGroup2;

    SimpleGraph *graph_time;

    bool first_click;
    bool data_from_file = false;
    bool continue_mode = true;

    int count = 0;
    int compare;

private slots:
	void TimerTicked();
	void SliderValueChanged(int value);
	void ButtonConfigureClicked();
	void ManualClicked(int id);
	void WaveButtonClicked(int id);
    void ButtonStartClicked();
    void ButtonPauseClicked();
    void ButtonStopClicked();
    void ButtonBrowseClicked();
    void CmbIndexChanged(int value);
};
#endif // STATICAO_H
