#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
const QUrl url("http://yuancheng.xunlei.com");
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("迅雷后台控制");
    cmd = new QProcess;
    binded=false;
    connect(cmd, SIGNAL(readyRead()), this, SLOT(readOutput()));
}

MainWindow::~MainWindow()
{
    delete cmd;
    delete ui;
}

void MainWindow::on_pushButton_start_clicked()
{

    ui->pushButton_start->setDisabled(true);
    ui->pushButton_stop->setDisabled(false);
    output.clear();
    flushTips("迅雷后台启动中...");
    cmd->start("pkexec /opt/xwared/portal");
    qDebug("start ...");
    cmd->waitForFinished();
    this->close();

}


void MainWindow::on_pushButton_stop_clicked()
{
     ui->pushButton_start->setDisabled(false);
     ui->pushButton_stop->setDisabled(true);
     flushTips("迅雷后台停止中...");
     cmd->start("pkexec /opt/xwared/portal -s");
     cmd->waitForFinished();
     this->close();
}

void MainWindow::readOutput()
{
    qDebug("readOutput");
    QString bindPrefix = "THIS DEVICE HAS BOUND TO USER: ";
    QString activePrefix = "THE ACTIVE CODE IS: ";
    QString activeFailPrefix = "fail to get xunlei service info finaly.";
    QString activeCode;
    QString bindName;
    QString activeCode_tmp;
    QString bindName_tmp;
    output+=cmd->readAll();
    ui->textEdit_output->setText(output);//输出原始信息
    int ai=output.indexOf(activePrefix);
    int bi = output.indexOf(bindPrefix);
    int ci = output.indexOf(activeFailPrefix);
    if(ai != -1 ) {
        ai += activePrefix.length();
        while(output[ai]!='\n') {
            activeCode_tmp+=output[ai++];
        }
        activeCode=activeCode_tmp;
        binded = false;
        flushTips("错误:激活状态...×...激活码（ "+activeCode_tmp+" )\n即将访问远程迅雷官网，请输入上述激活码激活本设备",2);
        ui->pushButton_start->setDisabled(false);
        QDesktopServices::openUrl(url);

    }else if(bi != -1) {
        bi +=bindPrefix.length();
        while(output[bi] != '\n') {
            bindName_tmp +=output[bi++];
        }
        bindName_tmp.remove(bindName_tmp.length()-1);
        bindName = bindName_tmp;
        binded = true;
        flushTips("激活状态...√...绑定名("+bindName+")",1);
    }else if(ci != -1){
        binded = false;
        flushTips("错误:无法获取迅雷服务信息\n请尝试重启本程序或再次点击\"启动\"",2);
        ui->pushButton_start->setDisabled(false);

    }

}

//刷新edit和label的内容
void MainWindow::flushTips(QString tips,int type)
{
    qDebug("flushTips");
    switch (type) {
    case 1:
        ui->centralWidget->setStyleSheet("#label_tips{color:#008000;}");
        break;
    case 2:
        ui->centralWidget->setStyleSheet("#label_tips{color:#FF0000;}");
        break;
    default:
        ui->centralWidget->setStyleSheet("#label_tips{color:#000000;}");
        break;
    }
    if(tips.length()>0){
    ui->label_tips->setText(tips);
    }else{
    ui->label_tips->setText("tips length error!");
    }
}
