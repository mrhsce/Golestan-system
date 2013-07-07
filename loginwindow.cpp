#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QLabel>
#include <QString>
#include <mainwindow.h>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    sql = new database("database");
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

bool IsTrueUserPass(QString User , QString Pass)
{
    //by database check if is true return true
    return false;
}

void LoginWindow::on_ok_clicked()
{
    if( IsTrueUserPass (ui->user->text() , ui->pass->text()) )
    {
        //we close loginWindow
        close();
        //we get studentId from database
        //for other information Ex:name family
        //we extract them by Sql and studentId
        mainWindow e(m_studentId);
        e.show();

    }
}
