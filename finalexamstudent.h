#ifndef FINALEXAMSTUDENT_H
#define FINALEXAMSTUDENT_H

#include <QMainWindow>

namespace Ui {
class FinalExamStudent;
}

class FinalExamStudent : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit FinalExamStudent(QWidget *parent = 0);
    ~FinalExamStudent();
    
private:
    Ui::FinalExamStudent *ui;
};

#endif // FINALEXAMSTUDENT_H
