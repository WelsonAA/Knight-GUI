#include "mainwindow.h"
#include <iostream>
#include "ChessB.h"
#include "openscreen.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{



    ChessB x("h1", "h4");
           x.addNexts();
           x.putPawn("f4");
           x.addPathK(x.dest, 0);
           x.choosePathK();

    QApplication ab(argc, argv);

    openscreen s;


//       w.setPawn1("f4");



  s.show();
    return ab.exec();
}
