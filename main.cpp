#include "loginwindow.h"
#include "resultexam.h"
#include "barnamehaftegi.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginWindow e;
    e.show();

    return a.exec();
}
