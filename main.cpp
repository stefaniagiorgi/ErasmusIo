#include "mainwindow.h"
#include "newuser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    newuser n;
    n.show();

    return a.exec();
}
