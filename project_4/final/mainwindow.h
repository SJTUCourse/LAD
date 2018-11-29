#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QButtonGroup>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QProcess process_AI;
    QProcess process_AO;
    QProcess process_DIO;

private slots:
    void function_AI();
    void function_AO();
    void function_DIO();
};

#endif // MAINWINDOW_H
