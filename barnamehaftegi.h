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
    explicit BarnameHaftegi(QWidget *parent = 0);
    ~BarnameHaftegi();
    
private:
    Ui::BarnameHaftegi *ui;
};

#endif // BARNAMEHAFTEGI_H
