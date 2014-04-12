#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QNetworkAccessManager>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_login_button_clicked();
    void finishedSlot(QNetworkReply *reply);

    void on_exit_button_clicked();

private:
    Ui::MainWindow *ui;
    QString _user;
    QString _pwd;
    QNetworkAccessManager* http_post;
};

#endif // MAINWINDOW_H
