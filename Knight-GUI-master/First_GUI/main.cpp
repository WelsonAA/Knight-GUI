#include "mainwindow.h"
#include <iostream>
#include "ChessB.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{



//    ChessB x("a5", "h4");
//           x.addNexts();
//           x.putPawn("f4");
//           x.addPathK(x.dest, 0);
//           x.choosePathK();

    QApplication ab(argc, argv);


MainWindow w;
//       w.setPawn1("f4");


w.show();
  //s.show();
    return ab.exec();
}
