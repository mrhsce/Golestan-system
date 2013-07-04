#include "mainwindow.h"
#include "ui_mainwindow.h"

mainWindow::mainWindow(int studentId ,QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::mainWindow),
    m_studentId(studentId)
{
    ui->setupUi(this);
}

mainWindow::~mainWindow()
{
    delete ui;
}
