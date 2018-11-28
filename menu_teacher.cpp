#include "menu_teacher.h"
#include "ui_menu_teacher.h"

menu_teacher::menu_teacher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu_teacher)
{
    ui->setupUi(this);
}

menu_teacher::~menu_teacher()
{
    delete ui;
}
