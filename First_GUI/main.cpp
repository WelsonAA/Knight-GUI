#include "mainwindow.h"
#include <iostream>
//#include "openscreen.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication ab(argc, argv);
    MainWindow w;
    w.show();
    return ab.exec();
}
