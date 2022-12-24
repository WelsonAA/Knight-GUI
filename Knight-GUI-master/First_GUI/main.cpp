#include "mainwindow.h"
#include <iostream>
#include "ChessB.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{


    ChessB x("h8", "a8");
           x.addNexts();
           x.addPathK(x.dest, 0);
           x.choosePathK();

    QApplication ab(argc, argv);

MainWindow w(nullptr,&x);


       //w.setInitial(x.src->pos);
/*
 if(!x.pathK.empty()){
 w.setInitial1(x.pathK.front()->pos);
 x.pathK.pop();}
 if(!x.pathK.empty()){
 w.setInitial2(x.pathK.front()->pos);
 x.pathK.pop();}
 if(!x.pathK.empty()){
 w.setInitial3(x.pathK.front()->pos);
 x.pathK.pop();}*/

  w.show();
    return ab.exec();
}
