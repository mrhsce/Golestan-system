#ifndef BARNAMEHAFTEGI_H
#define BARNAMEHAFTEGI_H

#include <QMainWindow>

namespace Ui {
class BarnameHaftegi;
}

class BarnameHaftegi : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit BarnameHaftegi(int studentId ,
                            QWidget *parent = 0);
    ~BarnameHaftegi();
    //we only get studentId and by qury in sql find other information
    int m_studentId;
    
private slots:
    void on_back_clicked();

private:
    Ui::BarnameHaftegi *ui;
};

#endif // BARNAMEHAFTEGI_H
