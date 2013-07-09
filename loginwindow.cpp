#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QLabel>
#include <mainwindow.h>
#include <QMessageBox>

#include "database.h"
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    db = new database("archive.db");
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

bool LoginWindow::IsTrueUserPass(QString User , QString Pass)
{

    db->query.exec(tr("select studentNo,password from StudentTable where studentNo=%1 and password='%2'").arg(User,Pass));
    if (db->query.next())
    {
        return true;


    }
    else{return false;}
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
        mainWindow *g;
        g = new mainWindow(ui->user->text());

        g->show();

    }
    else
    {
        QMessageBox::information(this , "warning","Wrong password");
    }
}
