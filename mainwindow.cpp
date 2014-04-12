#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "md5.h"

#include <QMessageBox>
#include <string>
#include <QDebug>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>

using std::string;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    http_post = new QNetworkAccessManager(this);
    //QObject::connect(http_post,SIGNAL(finished(QNetworkReply*)),this,
                    //SLOT(finishedSlot(QNetworkReply*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_button_clicked()
{
    QString user = ui->user_edit->text();
    string pwd = ui->pwd_edit->text().toStdString();
    if(pwd.empty()||user.isEmpty())
    {
        QMessageBox::warning(this,"警告","请输入账号或者密码");
        return;
    }
    QString str(QString::fromLocal8Bit(MD5(pwd).toString().substr(8,16).c_str()));
    _pwd = str;
    qDebug()<<_pwd;         //调试使用

    QUrl url("http://10.0.0.55/cgi-bin/do_login");
    //QbyteArray
}
