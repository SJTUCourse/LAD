#include "staticdi.h"
#include <QMessageBox>

StaticDI::StaticDI(QWidget *parent, Qt::WindowFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	//Set the minimum and close button of the main frame.
	this->setWindowFlags(Qt::WindowFlags(Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint));

    instantDiCtrl = InstantDiCtrl::Create();
    instantDoCtrl = InstantDoCtrl::Create();

    m_portPanel = nullptr;
    portPanelLength = 0;
	timer = new QTimer(this);
    timer_graph = new QTimer(this);

    this->layout = new QVBoxLayout(ui.scrollAreaWidgetContents);

	images[0] = "background:url(:/StaticDI/Resources/ledLow.png)";
	images[1] = "background:url(:/StaticDI/Resources/ledHigh.png)";

	connect(ui.btnConfig, SIGNAL(clicked()), this, SLOT(ButtonConfigureClicked()));
	connect(timer, SIGNAL(timeout()), this, SLOT(TimerTicked()));
    connect(timer_graph, SIGNAL(timeout()), this, SLOT(DrawGraph()));

    connect(ui.lst_mode,SIGNAL(currentIndexChanged(int)),this,SLOT(CmbIndexChanged(int)));
    connect(ui.btn_next, SIGNAL(clicked()), this, SLOT(ButtonNextClicked()));

    graph = new SimpleGraph(ui.Time_Frame);
    graph->setFixedSize(ui.Time_Frame->size());
    graph->m_xCordTimeDiv = 60;
    graph->m_yCordRangeMax = 4.5;
    graph->m_yCordRangeMin = -1.5;
}

StaticDI::~StaticDI()
{

}

void StaticDI::Initialize() {
	//set the title of the form.
	setWindowTitle(tr("Static DI - Run(") + configure.deviceName + tr(")"));

	ConfigureDevice();
	InitializePortPanel();

	//start the timer to read DI ports status
    timer->start(50);
}

void StaticDI::ConfigureDevice() {
    std::wstring description = configure.deviceName.toStdWString();
    DeviceInformation selected(description.c_str());

	ErrorCode errorCode = Success;
	errorCode = instantDiCtrl->setSelectedDevice(selected);
	CheckError(errorCode);
	errorCode = instantDiCtrl->LoadProfile(configure.profilePath);
	CheckError(errorCode);
    //portCount = instantDiCtrl->getPortCount();
    portCount = 1;

    ErrorCode errorCode2 = Success;
    errorCode2 = instantDoCtrl->setSelectedDevice(selected);
    CheckError(errorCode2);
    errorCode2 = instantDoCtrl->LoadProfile(configure.profilePath);
    CheckError(errorCode2);
    //portCount2 = instantDiCtrl->getPortCount();
    portCount2 = 1;
}

void StaticDI::InitializePortPanel() {
	//remove the old port panel
    if (m_portPanel != nullptr) {
		int height = ui.scrollAreaWidgetContents->height();
		for (int i = 0; i < portPanelLength; i++) {
			this->layout->removeWidget(m_portPanel[i]);
			ui.scrollAreaWidgetContents->setGeometry(0, 0, 341, height - (i + 1) * 50);
            if (m_portPanel[i] != nullptr)
            {
				delete m_portPanel[i];
                m_portPanel[i] = nullptr;
			}
		}
	}

	m_portPanel = new DioPortUI*[portCount];
    portPanelLength = portCount;
    for (int i = 0; i < portCount; i++) {
		ui.scrollAreaWidgetContents->setGeometry(0, 0, 341, (i + 1) * 50);
		m_portPanel[i] = new DioPortUI(0, 0, i, (quint8)0, images); 
		m_portPanel[i]->setIsEditable(false);

		this->layout->addWidget(m_portPanel[i]);
	}
}

void StaticDI::CheckError(ErrorCode errorCode) {
    if (BioFailed(errorCode))
	{
		QString message = tr("Sorry, there are some errors occurred, Error Code: 0x") +
			QString::number(errorCode, 16).right(8).toUpper();
		QMessageBox::information(this, "Warning Information", message);
	}
}

void StaticDI::ButtonConfigureClicked() {
	timer->stop();

	int dialogResult = configureDialog->exec();
	if (dialogResult == QDialog::Accepted) {
		configure = configureDialog->GetConfigureParameter();
		Initialize();
	}
}

void StaticDI::TimerTicked() {
	//read DI data
	quint8 *portStates = new quint8[portCount];
	ErrorCode errorCode = Success;
    errorCode = instantDiCtrl->Read(0, portCount, portStates);
	CheckError(errorCode);

    data[0] = *portStates;

	//update the UI
	for (int i = 0; i < portCount; i++) {
		this->m_portPanel[i]->setState(portStates[i]);
	}

    if(old_State!=portStates[0])
    {
        start = (portStates[0]) & 0x1;
        amp = (portStates[0]>>1) & 0x3;
        frequency = (portStates[0]>>3) & 0x1F;
        old_State=portStates[0];
        counter = 0;
    }
    if(start == 1)
    {
        if(!timer_graph->isActive())
        {
            timer_graph->start();
            if(frequency == 0)
                timer_graph->setInterval(1.0/(1000));
            else
                timer_graph->setInterval(1.0*1000/(frequency*20));
        }
        else
        {
            if(frequency == 0)
                timer_graph->setInterval(1.0/(1000));
            else
                timer_graph->setInterval(1.0*1000/(frequency*20));
        }
    }
    else
        timer_graph->stop();

    if(!mode)
        compare = compare-50;
    if(!mode && compare==0)
    {
        timer->stop();
        timer_graph->stop();
    }

}

void StaticDI::DrawGraph()
{
    counter = counter % 20;
    double amp_tmp[1];
    if(frequency == 0)
    {
        amp_tmp[0] = amp;
        graph->Chart(amp_tmp, 1, 1, 1.0/(1000));
    }
    else
    {
        amp_tmp[0] = (counter/10)*amp;
        graph->Chart(amp_tmp, 1, 1, 1.0/(frequency*20));
    }
    counter=counter+1;

    quint8 data_tmp[1];
    if(amp_tmp[0]>0)
        data_tmp[0] = 0x01;
    else
        data_tmp[0] = 0x00;
    ErrorCode errorCode = Success;
    errorCode = instantDoCtrl->Write(0, 1, &data_tmp[0]);
    CheckError(errorCode);
}

void StaticDI::CmbIndexChanged(int value)
{
    switch(value)
    {
        case 0:mode = true;
               timer->start(50);
               ui.btn_next->setEnabled(false);
               break;
        case 1:mode = false;
               ui.btn_next->setEnabled(true);
               timer->stop();
               timer_graph->stop();
               break;
        case 2:mode = false;
               ui.btn_next->setEnabled(true);
               timer->stop();
               timer_graph->stop();
               break;
        case 3:mode = false;
               ui.btn_next->setEnabled(true);
               timer->stop();
               timer_graph->stop();
               break;
    }

}

void StaticDI::ButtonNextClicked()
{
    timer->start(50);
    compare = ui.lst_mode->currentIndex() * 5000;
}
