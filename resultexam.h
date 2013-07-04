#ifndef RESULTEXAM_H
#define RESULTEXAM_H

#include <QMainWindow>
#include <QLabel>
#include "mainwindow.h"

namespace Ui {
class resultExam;
}

class resultExam : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit resultExam(int studentId ,QWidget *parent = 0);
    ~resultExam();
    QLabel *l1;
    int m_studentId;
    
private slots:
    void on_back_clicked();

private:
    Ui::resultExam *ui;
};

#endif // RESULTEXAM_H
