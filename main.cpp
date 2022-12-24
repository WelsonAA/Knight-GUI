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

    cout<<"Enter a position on the chess board\n";
    string str;
//    cin>>str;
//    //cout<<x.cb[0][0];
//    x.printNode(str);
    QApplication ab(argc, argv);

MainWindow w;
   w.show();
    w.setInitial(x.src->pos);
    return ab.exec();
}
