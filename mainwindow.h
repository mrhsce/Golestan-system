#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "barnamehaftegi.h"
#include "resultexam.h"
#include "database.h"
namespace Ui {
class mainWindow;
}

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindow(QString studentId,QWidget *parent = 0);
    ~mainWindow();
    QString m_studentId;
    database * db;

private slots:

    void on_karname_clicked();

    void on_barnameHaftegi_clicked();

    void on_vahed_clicked();

private:
    Ui::mainWindow *ui;
};

#endif // MAINWINDOW_H
