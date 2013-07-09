#include "barnamehaftegi.h"
#include "ui_barnamehaftegi.h"
#include <QString>
#include <QDebug>



BarnameHaftegi::BarnameHaftegi(QString StudentId ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BarnameHaftegi),
    m_studentId(StudentId)
{
    ui->setupUi(this);
    db = new database("archive.db");

    //query for getting name and family and college of student
    db->query.exec(tr("select name,SirName,college from StudentTable where studentNo=%1").arg(m_studentId));
    if (db->query.next())
    {
        ui->name->setText("<font color = blue>" +db->query.value(0).toString()+" "+db->query.value(1).toString());
        ui->daneshkade->setText("<font color = blue>"+db->query.value(2).toString());

    }
    else
    {
        ui->name->setText("<font color = blue> کاربر ناشناخته");
        ui->daneshkade->setText("<font color = blue> کاربر ناشناخته");
    }


     qDebug()<< db->query.exec(tr("select classLessonTable.name , classLessonTable.daysCode , classTable.classAddress from classLessonTable,classTable,enrolmentTable,StudentTable where StudentTable.studentNo=%1 and enrolmentTable.studentId=StudentTable.studentId and enrolmentTable.classLessonId=classLessonTable.classLessonId  and classLessonTable.classId=classTable.classId ").arg(m_studentId));

    while(db->query.next())
    {
        QString sql = db->query.value(1).toString();

        qDebug()<<"start of if";

        if(sql == "a1")
            ui->a1->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "a2")
            ui->a2->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "a3")
            ui->a3->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "a4")
            ui->a4->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "a5")
            ui->a5->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());


        else if(sql == "b1")
            ui->b1->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "b2")
            ui->b2->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "b3")
            ui->b3->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "b4")
            ui->b4->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "b5")
            ui->b5->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());


        else if(sql == "c1")
            ui->c1->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "c2")
            ui->c2->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "c3")
            ui->c3->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "c4")
            ui->c4->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "c5")
            ui->c5->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());


        else if(sql == "d1")
            ui->d1->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "d2")
            ui->d2->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "d3")
            ui->d3->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "d4")
            ui->d4->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "d5")
            ui->d5->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());


        else if(sql == "e1")
            ui->e1->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "e2")
            ui->e2->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "e3")
            ui->e3->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "e4")
            ui->e4->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

        else if(sql == "e5")
            ui->e5->setText(db->query.value(0).toString()+"<br>"+db->query.value(2).toString());

    }




    //all information below must gets by database
//    ui->name->setText(name);
//    ui->vahed->setText(vahed);//ex:19
//    ui->daneshkade->setText(daneshkade);//ex:computer
//    ui->magta->setText(magta);//ex:arshad

    //and by database set tabel barnameHaftegi
}
BarnameHaftegi::~BarnameHaftegi()
{
    delete ui;
}

void BarnameHaftegi::on_back_clicked()
{
    close();

}


