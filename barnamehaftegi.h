#ifndef BARNAMEHAFTEGI_H
#define BARNAMEHAFTEGI_H

#include <QMainWindow>
#include <Qstring>
#include <database.h>


namespace Ui {
class BarnameHaftegi;
}

class BarnameHaftegi : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit BarnameHaftegi(QString studentId ,
                            QWidget *parent = 0);
    ~BarnameHaftegi();
    //we only get studentId and by qury in sql find other information
    QString m_studentId;
    database *db;

private slots:
    void on_back_clicked();

private:
    Ui::BarnameHaftegi *ui;
};

#endif // BARNAMEHAFTEGI_H
