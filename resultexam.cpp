#include "resultexam.h"
#include "ui_resultexam.h"
#include <QVector>
#include<QDebug>

resultExam::resultExam(QString studentId ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resultExam),
    m_studentId(studentId)
{
    db=new database("archive.db");
    ui->setupUi(this);

    /*
    below is a example for how add a grade to ui
    l1 = new QLabel("ریاضی");
    for all label below stylesheet and Alignment must be exist
    l1->setStyleSheet("background:rgb(170, 170, 127);");
    l1->setAlignment(Qt::AlignHCenter);

    ui->gridview->addWidget(l1 , 1, 0);
    */
    qDebug()<<db->query.exec(tr("select StudentTable.name,SirName,college,studentNo from StudentTable where studentNo=%1").arg(m_studentId));
    if (db->query.next())
    {
        ui->nameLabel->setText(db->query.value(0).toString()+" "+db->query.value(1).toString());
        ui->collegeLabel->setText(db->query.value(2).toString());
        ui->numberLabel->setText(QString::number(db->query.value(3).toInt()));
    }

    qDebug()<<db->query.exec(tr("select enrolmentTable.firstScore,enrolmentTable.secondScore,classLessonTable.unitsNo,classLessonTable.name,classLessonTable.classLessonId from enrolmentTable,classLessonTable,StudentTable where StudentTable.studentNo=%1  and StudentTable.studentId=enrolmentTable.studentId and classLessonTable.classLessonId=enrolmentTable.classLessonId").arg(m_studentId));
    int num=1;
    float scoreSum=0;
    int unitSum=0;
    int passedUnit=0;
    while (db->query.next())
    {
        QVector<QLabel *> list(5);
        list[0]=new QLabel(QString::number(db->query.value(0).toFloat()+db->query.value(1).toFloat()));
        list[1]=new QLabel(QString::number(db->query.value(2).toInt()));
        list[2]=new QLabel(db->query.value(3).toString());
        list[3]=new QLabel(QString::number(db->query.value(4).toInt()));
        list[4]=new QLabel(QString::number(num));
        scoreSum+=(db->query.value(0).toFloat()+db->query.value(1).toFloat())*db->query.value(2).toInt();
        unitSum+=db->query.value(2).toInt();
        if (db->query.value(0).toFloat()+db->query.value(1).toFloat()>=10)
        {
            passedUnit+=db->query.value(2).toInt();
        }
        for(int i=0;i<5;i++)
        {
          list[i]->setStyleSheet("background:rgb(170, 170, 127);");
          list[i]->setAlignment(Qt::AlignHCenter);
          ui->gridview->addWidget(list[i] , num, i);
        }
        num++;

    }



    ui->average->setText(QString::number(scoreSum/unitSum));//ex:for me 17
    ui->vahedTotal->setText(QString::number(unitSum));//ex:for me 16
    ui->vahed_pass->setText(QString::number(passedUnit));//ex:for me 16
}

resultExam::~resultExam()
{
    delete ui;
}

void resultExam::on_back_clicked()
{
    //close current window and back to mainWindow
    close();    
}
