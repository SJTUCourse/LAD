#ifndef STATICDI_H
#define STATICDI_H

#include <QDialog>
#include <QTimer>
#include <QtWidgets/QDialog>
#include <QtCore/QtCore>
#include "ui_staticdi.h"
#include "configuredialog.h"
#include "../common/DioPortUI.h"
#include "../common/simplegraph.h"
#include <QPushButton>

class StaticDI : public QDialog
{
	Q_OBJECT

public:
	StaticDI(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~StaticDI();

	void Initialize();
	void InitializePortPanel();
	void SetConfigureDialog(ConfigureDialog * dialog){configureDialog = dialog;}
	void SetConfigureParameter(ConfigureParameter value){configure = value;}
	void ConfigureDevice();
	void CheckError(ErrorCode errorCode);

private:
	Ui::StaticDIClass ui;
	ConfigureDialog *configureDialog;
	ConfigureParameter configure;
	InstantDiCtrl* instantDiCtrl;
    InstantDoCtrl* instantDoCtrl;
	DioPortUI** m_portPanel;
	QVBoxLayout* layout;

	int portCount;
    int portCount2;
	int portPanelLength;
	QString images[2];
    QTimer *timer;
    QTimer *timer_graph;

    SimpleGraph *graph;
    int start = 0;
    int amp = 0;
    int frequency = 0;
    quint8 old_State = quint8(0);
    int counter = 0;

    quint8 data[1];

    bool mode = true;
    int compare;//unit:ms

private slots:
	void ButtonConfigureClicked();
	void TimerTicked();
    void DrawGraph();
    void CmbIndexChanged(int value);
    void ButtonNextClicked();
};

#endif // STATICDI_H
