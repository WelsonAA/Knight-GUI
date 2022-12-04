#include "mainwindow.h"
#include <iostream>
#include "ChessB.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    ChessB x("d1","f2");
    x.addNexts();
    cout<<"Enter a position on the chess board\n";
    string str;
    cin>>str;
    //cout<<x.cb[0][0];
    x.printNode(str);
    QApplication a(argc, argv);

    /*QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "First_GUI_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }*/
    MainWindow w;
    w.show();
    // w.takeParameters("a8","c5");
    return a.exec();
}
