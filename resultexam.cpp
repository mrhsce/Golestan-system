#include "resultexam.h"
#include "ui_resultexam.h"

resultExam::resultExam(int studentId ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resultExam),
    m_studentId(studentId)
{
    ui->setupUi(this);

    //below is a example for how add a grade to ui
    l1 = new QLabel("ریاضی");
    //for all label below stylesheet and Alignment must be exist
    l1->setStyleSheet("background:rgb(170, 170, 127);");
    l1->setAlignment(Qt::AlignHCenter);

    ui->gridview->addWidget(l1 , 1, 0);



    ui->average->setText(average);//ex:for me 17
    ui->vahedTotal->setText(vahed_total);//ex:for me 16
    ui->vahed_pass->setText(vahed_pass);//ex:for me 16
}

resultExam::~resultExam()
{
    delete ui;
}

void resultExam::on_back_clicked()
{
    //close current window and back to mainWindow
    close();
    mainWindow e(m_studentId);
    e.show();
}
