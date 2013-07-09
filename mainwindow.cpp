#include "mainwindow.h"
#include "ui_mainwindow.h"



mainWindow::mainWindow(QString studentId ,QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::mainWindow),
    m_studentId(studentId)
{
    db=new database("archive.db");
    ui->setupUi(this);
    db->query.exec(tr("select name,SirName from StudentTable where studentNo=%1").arg(studentId));
    if (db->query.next())
    {
        ui->topLabel->setText(ui->topLabel->text()+db->query.value(0).toString()+" "+db->query.value(1).toString());
    }
    else
    {
        ui->topLabel->setText(ui->topLabel->text()+"کاربر ناشناخته ");
    }
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::on_karname_clicked()
{

    resultExam * e;
    e= new resultExam(m_studentId);

    e->show();
}

void mainWindow::on_barnameHaftegi_clicked()
{

    BarnameHaftegi * h;
    h= new BarnameHaftegi(m_studentId);

    h->show();
}

void mainWindow::on_vahed_clicked()
{

}
