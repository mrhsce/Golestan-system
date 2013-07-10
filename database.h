#ifndef DATABASE_H
#define DATABASE_H
#include <QCoreApplication>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDir>
#include <QString>

class database
{
private:
    void preparation();


public:
    QSqlDatabase db;
    QSqlQuery query;

    void execmany(QString,int);
    database(QString);
    ~database();
};

#endif // DATABASE_H
