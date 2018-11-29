#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QDebug>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btn_ai->setEnabled(true);
    ui->btn_ao->setEnabled(true);
    ui->btn_dio->setEnabled(true);
    connect(ui->btn_ai, SIGNAL(clicked()), this, SLOT(function_AI()));
    connect(ui->btn_ao, SIGNAL(clicked()), this, SLOT(function_AO()));
    connect(ui->btn_dio, SIGNAL(clicked()), this, SLOT(function_DIO()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::function_AI()
{
    this->setVisible(false);
    process_AI.start(".\\project1\\release\\AI_InstantAI.exe",QStringList());
    process_AI.waitForFinished();
    this->setVisible(true);
}

void MainWindow::function_AO()
{
    this->setVisible(false);
    process_AO.start(".\\project2\\release\\AO_StaticAO.exe",QStringList());
    process_AO.waitForFinished();
    this->setVisible(true);
}

void MainWindow::function_DIO()
{
    this->setVisible(false);
    process_DIO.start(".\\project3\\release\\DI_StaticDI.exe",QStringList());
    process_DIO.waitForFinished();
    this->setVisible(true);
}
