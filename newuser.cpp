#include "newuser.h"
#include "ui_newuser.h"

newuser::newuser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newuser)
{
    ui->setupUi(this);
}

newuser::~newuser()
{
    delete ui;
}
