#ifndef RESULTEXAM_H
#define RESULTEXAM_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class resultExam;
}

class resultExam : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit resultExam(QWidget *parent = 0);
    ~resultExam();
    QLabel *l1;
    
private:
    Ui::resultExam *ui;
};

#endif // RESULTEXAM_H
