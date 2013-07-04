#include "barnamehaftegi.h"
#include "ui_barnamehaftegi.h"

BarnameHaftegi::BarnameHaftegi(int StudentId ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BarnameHaftegi),
    m_studentId(StudentId)
{
    ui->setupUi(this);

    //all information below must gets by database
    ui->name->setText(name);
    ui->vahed->setText(vahed);//ex:19
    ui->daneshkade->setText(daneshkade);//ex:computer
    ui->magta->setText(magta);//ex:arshad

    //and by database set tabel barnameHaftegi
}
BarnameHaftegi::~BarnameHaftegi()
{
    delete ui;
}

void BarnameHaftegi::on_back_clicked()
{
    //close current window and back to mainWindow
    close();
    mainWindow e(m_studentId);
    e.show();
}


