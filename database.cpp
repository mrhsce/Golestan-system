#include "database.h"
#include<QDebug>

database::database(QString name)
{

        db=QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(name);
        db.setUserName("MrHs");
        db.setPassword("IUST");
        db.open();
        query=QSqlQuery(db);
        preparation();

}

void database::preparation()
{
    //Creating Userpass
    if(!(query.exec("select studentId from StudentTable")))
    {
        qDebug()<<"Database does not exist Creating database..";

        //Creating tables

        qDebug()<<query.exec("create table StudentTable(studentId int,college text,password text,name str,SirName text,DoB date,courseNo int,studentNo int,father text)");
        qDebug()<<query.exec("create table teacherTable(name text,sirName text,college text,gender text,teacherID int,scientificGrade text,password text)");
        qDebug()<<query.exec("create table classLessonTable(classLessonId int,teacherId int,classId int,college text,unitsNo int,TAid int ,daysCode text,year int,cemester int,name text)");
        qDebug()<<query.exec("create table enrolmentTable(studentId int,classLessonId int,firstScore float,secondScore float)");
        qDebug()<<query.exec("create table classTable(classId int,classAddress text,college text)");

        qDebug()<<query.exec("insert into classLessonTable values(11,12,134,'computer',3,2,'c1',1391,1,'mabani')");
        qDebug()<<query.exec("insert into classLessonTable values(12,13,144,'riazi',5,7,'b1',1391,1,'physics')");
        qDebug()<<query.exec("insert into classLessonTable values(15,19,189,'physic',5,7,'d2',1391,1,'gosaste')");


        qDebug()<<query.exec("insert into classTable values(134,'Hakimieh','Computer')");
        qDebug()<<query.exec("insert into classTable values(144,'Majidieh','Riazi')");
        qDebug()<<query.exec("insert into classTable values(189,'Rashid','Physic')");

        qDebug()<<query.exec("insert into enrolmentTable values(1,11,9.5,10)");
        qDebug()<<query.exec("insert into enrolmentTable values(1,12,4,7)");
        qDebug()<<query.exec("insert into enrolmentTable values(1,15,5,8)");
        qDebug()<<query.exec("insert into enrolmentTable values(2,11,8,10)");
        qDebug()<<query.exec("insert into enrolmentTable values(2,12,2,4)");
        qDebug()<<query.exec("insert into enrolmentTable values(2,15,1,10)");

        qDebug()<<query.exec("insert into StudentTable values(1,'کامپیوتر','1373','محمدرضا','حیدریان',1373,2,91521104,'رحمان')");
        qDebug()<<query.exec("insert into StudentTable values(2,'کامپیوتر','1372','مهدی','بگوند',1372,1,91521068,'علی')");
        qDebug()<<query.exec("insert into StudentTable values(3,'Computer','1371','Mehdi','Bagvand',1372,1,91521068,'Ali')");

    }    
    else
    {



        qDebug()<<"Database existed";
    }
}

database::~database()
{
    db.commit();
    db.close();
}

