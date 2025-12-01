#include "headers/mainwindow.h"
#include "headers/clientwindow.h"
#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    ClientWindow cw;

    w.show();
    cw.show();

    return a.exec();
}
