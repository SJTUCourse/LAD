#include "ai_instant.h"
#include <QPalette>
#include <QtWidgets/QListWidgetItem>
#include <QtWidgets/QMessageBox>
#include <QMouseEvent>

AI_Instant::AI_Instant(QWidget *parent, Qt::WindowFlags flags)
	: QDialog(parent, flags)
{
	ui.setupUi(this);
	//Set the minimum and close button of the main frame.
	this->setWindowFlags(Qt::WindowFlags(Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint));

	//Set the background image for the main frame.
	this->setAutoFillBackground(true);
	QPixmap pixMap(":/AI_Instant/Resources/Background.png");
	QPalette backPalette;
	backPalette.setBrush(this->backgroundRole(), QBrush(pixMap));
    this->setPalette(backPalette);

	// Initialize the scaled data array.
	for (int i = 0; i < 16; i++)
	{
		scaledData[i] = 0;
	}
    instantAiCtrl = nullptr;
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(TimerTicked()));
    connect(ui.sldTimerValue, SIGNAL(valueChanged(int)), this, SLOT(SliderValueChanged(int)));
	connect(ui.btnConfigure, SIGNAL(clicked()), this, SLOT(ButtonConfigureClicked()));
	connect(ui.btnStart, SIGNAL(clicked()), this, SLOT(ButtonStartClicked()));
	connect(ui.btnPause, SIGNAL(clicked()), this, SLOT(ButttonPauseClicked()));
	connect(ui.btnStop, SIGNAL(clicked()), this, SLOT(ButtonStopClicked()));
    connect(ui.btnFFT,SIGNAL(clicked()),this,SLOT(ButtonFFTClicked()));
    connect(ui.sldXscale,SIGNAL(valueChanged(int)),this,SLOT(SliderXScaleChanged(int)));
    connect(ui.sldYscale,SIGNAL(valueChanged(int)),this,SLOT(SliderYScaleChanged(int)));
    connect(ui.cmb_channel_choice,SIGNAL(currentIndexChanged(int)),this,SLOT(CmbIndexChanged(int)));
	graph = new SimpleGraph(ui.graphFrame);
	graph->setFixedSize(ui.graphFrame->size());

}

AI_Instant::~AI_Instant()
{
    if (instantAiCtrl != nullptr)
	{
		instantAiCtrl->Dispose();
	}
}

void AI_Instant::Initialize()
{

	this->setWindowTitle(tr("Instant AI - Run(") + configure.deviceName + tr(")"));
	
	ConfigureDevice();
	ConfigureGraph();
	
	//Initialize the list.
	ui.listWidget->clear();
    ui.listWidget_click->clear();
    QListWidgetItem *item = nullptr;
	for (int i = 0; i < configure.channelCount; i++)
	{
		item = new QListWidgetItem(tr("0.0000"), ui.listWidget);
		item->setBackgroundColor(SimpleGraph::lineColor[i]);
		item->setSizeHint(QSize(59, 24));
		item->setTextAlignment(Qt::AlignCenter);
	}

    //Initialize the listWidget_click
    QListWidgetItem *item2 = nullptr;
    item2 = new QListWidgetItem(tr("0.0000"), ui.listWidget_click);
    item2->setSizeHint(QSize(59, 24));
    item2->setTextAlignment(Qt::AlignCenter);

	ui.btnConfigure->setEnabled(true);
	ui.btnStart->setEnabled(true);
	ui.btnPause->setEnabled(false);
	ui.btnStop->setEnabled(false);
	ui.sldTimerValue->setEnabled(true);
    ui.sldXscale->setEnabled(true);
    ui.sldYscale->setEnabled(true);
    ui.edtTimeValue_scale->setText(QString("%1").arg(ui.sldXscale->value()));
    ui.edtAmp_scale_max->setText(QString("%1").arg(ui.sldYscale->value()));
    ui.edtAmp_scale_min->setText(QString("%1").arg(ui.sldYscale->value()*(-1)));

    QFile csvFile_0(FILE_PATH_0);
    csvFile_0.remove();
    QFile csvFile_1(FILE_PATH_1);
    csvFile_1.remove();
    QFile csvFile_2(FILE_PATH_2);
    csvFile_2.remove();
    QFile csvFile_3(FILE_PATH_3);
    csvFile_3.remove();
    QFile csvFile_4(FILE_PATH_4);
    csvFile_4.remove();
    QFile csvFile_5(FILE_PATH_5);
    csvFile_5.remove();
    QFile csvFile_6(FILE_PATH_6);
    csvFile_6.remove();
    QFile csvFile_7(FILE_PATH_7);
    csvFile_7.remove();

    this->setMouseTracking (true);

    fre_graph = new fft_dialog;
}

void AI_Instant::ConfigureDevice()
{
    if (instantAiCtrl == nullptr)
	{
      instantAiCtrl = InstantAiCtrl::Create();
	}

    std::wstring description = configure.deviceName.toStdWString();
    DeviceInformation selected(description.c_str());

    ErrorCode errorCode = instantAiCtrl->setSelectedDevice(selected);
	CheckError(errorCode);
	errorCode = instantAiCtrl->LoadProfile(configure.profilePath);
	CheckError(errorCode);

	//Get channel max number. set value range for every channel.
	Array<AiChannel> *channels = instantAiCtrl->getChannels();
	for (int i = 0; i < channels->getCount(); i++)
	{
		channels->getItem(i).setValueRange(configure.valueRange);
	}
}

void AI_Instant::ConfigureGraph()
{
	TimeUnit timeUnit = Second;
	QString	xRanges[2] = {tr("")};
	graph->GetXCordRange(xRanges, 10, 0, timeUnit);
    ui.lblXCoordinateStart->setText(xRanges[1]);

	ValueUnit unit;
	MathInterval rangeY;
	QString yRanges[3] = {tr("")};
    ErrorCode errorCode = AdxGetValueRangeInformation(configure.valueRange, 0, nullptr, &rangeY, &unit);
	CheckError(errorCode);
	
	graph->GetYCordRange(yRanges, rangeY.Max, rangeY.Min, unit);
    ui.edtAmp_scale_max->setText(yRanges[0]);
    ui.edtAmp_scale_min->setText(yRanges[1]);
    ui.lblYCoordinateMid->setText(yRanges[2]);

	if (Milliampere == unit || Millivolt == unit)
	{
		rangeY.Max /= 1000;
		rangeY.Min /= 1000;
	}
	graph->m_xCordTimeDiv = 1000;
	graph->m_yCordRangeMax = rangeY.Max;
	graph->m_yCordRangeMin = rangeY.Min;
	graph->Clear();
}

void AI_Instant::CheckError(ErrorCode errorCode)
{
    if (BioFailed(errorCode))
	{
		QString message = tr("Sorry, there are some errors occurred, Error Code: 0x") +
			QString::number(errorCode, 16).right(8).toUpper();
		QMessageBox::information(this, "Warning Information", message);
	}
}


void AI_Instant::TimerTicked()
{
	ErrorCode errorCode = Success;
    errorCode = instantAiCtrl->Read(configure.channelStart, configure.channelCount, scaledData);
	CheckError(errorCode);
	if (errorCode != Success)
	{
		return;
    }

	int dataCylic = ui.sldTimerValue->value();
    graph->Chart(scaledData, configure.channelCount, 1, 1.0 * dataCylic / 1000);
	RefreshList();
}

void AI_Instant::mousePressEvent(QMouseEvent *event)
{
    QListWidgetItem *item;
    item = ui.listWidget_click->item(0);
    QPoint coursePoint;
    coursePoint = QCursor::pos();
    coursePoint = QWidget::mapFromGlobal(coursePoint);
    double x_location = (coursePoint.x()-110)/621.0*ui.sldXscale->value();
    double y_location = -(coursePoint.y()-210)/170.0*ui.sldYscale->value();
    QString str = tr("");
    str.sprintf("%.4f", y_location);
    if(ui.graphFrame->geometry().contains(coursePoint))
        item->setText(str);
}

void AI_Instant::RefreshList()
{
	QListWidgetItem *item;
	QString dataStr = tr("0.0000");
	QString str = tr("");

    QFile csvFile_0(FILE_PATH_0);
    QTextStream textStream_0(&csvFile_0);
    QFile csvFile_1(FILE_PATH_1);
    QTextStream textStream_1(&csvFile_1);
    QFile csvFile_2(FILE_PATH_2);
    QTextStream textStream_2(&csvFile_2);
    QFile csvFile_3(FILE_PATH_3);
    QTextStream textStream_3(&csvFile_3);
    QFile csvFile_4(FILE_PATH_4);
    QTextStream textStream_4(&csvFile_4);
    QFile csvFile_5(FILE_PATH_5);
    QTextStream textStream_5(&csvFile_5);
    QFile csvFile_6(FILE_PATH_6);
    QTextStream textStream_6(&csvFile_6);
    QFile csvFile_7(FILE_PATH_7);
    QTextStream textStream_7(&csvFile_7);

	for(int i = 0; i < ui.listWidget->count(); i++)
	{
		item = ui.listWidget->item(i);
		str.sprintf("%.4f", scaledData[i]);
		dataStr = str;
		if (str.length() > 7)
		{
			dataStr = str.left(7);
		}
		item->setText(dataStr);

        switch(i)
                {
                case 0:if (csvFile_0.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_0<<dataStr<<"\t"<<0<<endl;
                               csvFile_0.close();
                           }
                           break;
                case 1:if (csvFile_1.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_1<<dataStr<<"\t"<<0<<endl;
                               csvFile_1.close();
                           }
                           break;
                case 2:if (csvFile_2.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_2<<dataStr<<"\t"<<0<<endl;
                               csvFile_2.close();
                           }
                           break;
                case 3:if (csvFile_3.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_3<<dataStr<<"\t"<<0<<endl;
                               csvFile_3.close();
                           }
                           break;
                case 4:if (csvFile_4.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_4<<dataStr<<"\t"<<0<<endl;
                               csvFile_4.close();
                           }
                           break;
                case 5:if (csvFile_5.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_5<<dataStr<<"\t"<<0<<endl;
                               csvFile_5.close();
                           }
                           break;
                case 6:if (csvFile_6.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_6<<dataStr<<"\t"<<0<<endl;
                               csvFile_6.close();
                           }
                           break;
                case 7:if (csvFile_7.open(QIODevice::Text | QIODevice::Append))
                           {
                               textStream_7<<dataStr<<"\t"<<0<<endl;
                               csvFile_7.close();
                           }
                           break;
                }
	}
}

void AI_Instant::SliderValueChanged(int value)
{ 
	ui.edtTimeValue->setText(QString("%1").arg(value));
	timer->setInterval(ui.sldTimerValue->value());
	graph->Clear();
    fre_graph->fs = 1000.0/value;
}

void AI_Instant::SliderXScaleChanged(int value)
{
    ui.edtTimeValue_scale->setText(QString("%1").arg(value));
    graph->m_xCordTimeDiv = value * 1000 / 10;
    graph->Clear();
}

void AI_Instant::SliderYScaleChanged(int value)
{
    ui.edtAmp_scale_max->setText(QString("%1").arg(value));
    ui.edtAmp_scale_min->setText(QString("%1").arg(-value));
    graph->m_yCordRangeMax = value;
    graph->m_yCordRangeMin = -value;
    graph->Clear();
}

void AI_Instant::ButtonConfigureClicked()
{
	timer->stop();
	graph->Clear();

	int dialogResult = configDialog->exec();
	if (dialogResult == QDialog::Accepted)
	{
		configure = configDialog->GetConfigureParameter();
		Initialize();
	}
}

void AI_Instant::ButtonStartClicked()
{
	int dataCylic = ui.sldTimerValue->value();
    timer->start(dataCylic);

	ui.btnConfigure->setEnabled(false);
	ui.btnStart->setEnabled(false);
	ui.btnPause->setEnabled(true);
	ui.btnStop->setEnabled(true);
}

void AI_Instant::ButttonPauseClicked()
{
	timer->stop();
	ui.btnPause->setEnabled(false);
	ui.btnStart->setEnabled(true);
	ui.btnStop->setEnabled(true);
}

void AI_Instant::ButtonStopClicked()
{
	timer->stop();
    graph->Clear();

	ui.btnConfigure->setEnabled(true);
	ui.btnPause->setEnabled(false);
	ui.btnStart->setEnabled(true);
    ui.btnStop->setEnabled(false);
}

void AI_Instant::ButtonFFTClicked()
{
    fre_graph->show();
    fre_graph->update();
}
void AI_Instant::CmbIndexChanged(int value)
{
    fre_graph->channel = value;
}
