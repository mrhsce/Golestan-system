#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <database.h>
#include <QString>

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();
    database *db;

private slots:
    void on_ok_clicked();
    bool IsTrueUserPass(QString , QString);
private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
