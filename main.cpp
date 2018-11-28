#include "mainwindow.h"
#include "menu_teacher.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    menu_teacher x;
    x.show();


    return a.exec();
}
