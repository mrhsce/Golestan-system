#include "barnamehaftegi.h"
#include "ui_barnamehaftegi.h"

BarnameHaftegi::BarnameHaftegi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BarnameHaftegi)
{
    ui->setupUi(this);
}

BarnameHaftegi::~BarnameHaftegi()
{
    delete ui;
}
