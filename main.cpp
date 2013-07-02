#include "loginwindow.h"
#include "resultexam.h"
#include "barnamehaftegi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();

    resultExam e;
    e.show();

    BarnameHaftegi r;
    r.show();
    
    return a.exec();
}
