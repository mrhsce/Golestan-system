#include "database.h"

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

    void Database::preparation()
    {
        //Creating Userpass
        if(!(query.exec("select studentId from StudentTable")))
        {
            qDebug()<<"Database does not exist Creating database..";

            //Creating tables

            qDebug()<<query.exec("create table StudentTable(studentId int not null,password text not null,name str not null,SirName text not null,DoB date not null,courseNo int not null,studentNo int not null,father text not null)");
            qDebug()<<query.exec("create table teacherTable(name text not null,sirName text not null,college text,gender text not null,teacherID int not null,scientificGrade text not null,password text not null)");
            qDebug()<<query.exec("create table classLessonTable(classLessonId int not null,teacherId int not null,classId int not null,college text,startTime float not null,endTime float not null,unitsNo int not null,TAid int not null,daysCode int not null,year int not null,cemester int not null)");
            qDebug()<<query.exec("create table enrolmentTable(studentId int not null,classLessonId int not null,firstScore float,secondScore float)");
            qDebug()<<query.exec("create table classTable(classId int not null,classAddress text,college text)");

            //qDebug()<<query.exec("alter table Students add (gender blob ,studentID int ,birthDate date,father text )");
            //qDebug()<<query.exec("alter table Students add(studentNum int,image text)");
            //qDebug()<<query.exec("alter table Students add gender blob");

            /*
            qDebug()<<query.exec("insert into Userpass values('MrHs','91521104',1,2)");
            qDebug()<<query.exec("insert into Userpass values('MrHs2','3750315329',2,1)");
            qDebug()<<query.exec("insert into Stuffs(name,sirName,title,gender,stuffID) values('MohammadReza','Heidarian','admin','Mr',1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('First A',1,1)");
            qDebug()<<query.exec("insert into Students(name,sirName,classID,studentID) values('Mahdi','Bagvand',1,10)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('First B',14,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('First C',2,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Second A',3,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Second B',4,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Second C',5,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Third A',6,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Third B',7,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Third C',8,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Fourth A',9,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Fourth B',10,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Fourth C',11,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Fifth A',12,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Fifth B',13,1)");
            qDebug()<<query.exec("insert into Classes(title,classID,teacherID) values('Fifth C',15,1)");
*/
        }
        else{qDebug()<<"Database existed";}


    }

    database::~database()
    {
        db.commit();
        db.close();
    }
}
