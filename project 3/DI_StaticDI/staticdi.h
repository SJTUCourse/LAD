#ifndef STATICDI_H
#define STATICDI_H

#include <QDialog>
#include <QTimer>
#include "ui_staticdi.h"
#include "configuredialog.h"
#include "../common/DioPortUI.h"
#include "../common/simplegraph.h"

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

    uint8 data[1];

private slots:
	void ButtonConfigureClicked();
	void TimerTicked();
    void DrawGraph();
};

#endif // STATICDI_H
