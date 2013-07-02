#include "resultexam.h"
#include "ui_resultexam.h"

resultExam::resultExam(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resultExam)
{
    ui->setupUi(this);

    l1 = new QLabel("سلام");
    l1->setStyleSheet("background:rgb(170, 170, 127);");
    l1->setAlignment(Qt::AlignHCenter);

    ui->gridview->addWidget(l1 , 1, 0);
}

resultExam::~resultExam()
{
    delete ui;
}
