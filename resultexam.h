#ifndef RESULXAM_H
#define RESULXAM_H

#include <QMainWindow>
#include <QLabel>
#include <QString>
#include "mainwindow.h"
#include "database.h"
namespace Ui {
class resultExam;
}

class resultExam : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit resultExam(QString studentId ,QWidget *parent = 0);
    ~resultExam();
    database * db;
    QLabel *l1;
    QString m_studentId;
    
private slots:
    void on_back_clicked();

private:
    Ui::resultExam *ui;
};

#endif // RESULXAM_H
