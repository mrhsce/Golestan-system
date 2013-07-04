#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class mainWindow;
}

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainWindow(int studentId,QWidget *parent = 0);
    ~mainWindow();
    int m_studentId;


private:
    Ui::mainWindow *ui;
};

#endif // MAINWINDOW_H
