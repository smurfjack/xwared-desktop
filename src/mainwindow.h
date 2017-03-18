#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QDesktopServices>
#include <QTextEdit>
#include <QTime>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:



private slots:
    void on_pushButton_start_clicked();
    void on_pushButton_stop_clicked();
    void readOutput();//read the cmd output

private:
    Ui::MainWindow *ui;
    QProcess *cmd;
    QString output;
    bool binded;
    void flushTips(QString tips,int type=0);
    void sleep(unsigned int msec);
};

#endif // MAINWINDOW_H
