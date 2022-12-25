/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_Close;
    QLabel *ChessBoard;
    QLabel *KnightW;
    QLabel *PawnB2;
    QLabel *BishopW;
    QLabel *PawnB1;
    QLabel *no1;
    QLabel *no2;
    QLabel *no3;
    QLabel *no4;
    QLabel *no5;
    QLabel *no6;
    QLabel *no7;
    QLabel *no8;
    QPushButton *btn_GameStart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(2000, 2000);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setBaseSize(QSize(200, 200));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_Close = new QPushButton(centralwidget);
        btn_Close->setObjectName("btn_Close");
        btn_Close->setGeometry(QRect(370, 60, 200, 50));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        btn_Close->setFont(font);
        ChessBoard = new QLabel(centralwidget);
        ChessBoard->setObjectName("ChessBoard");
        ChessBoard->setGeometry(QRect(160, 110, 700, 700));
        ChessBoard->setBaseSize(QSize(700, 700));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        ChessBoard->setFont(font1);
        ChessBoard->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/720px-Chessboard480.svg.png")));
        KnightW = new QLabel(centralwidget);
        KnightW->setObjectName("KnightW");
        KnightW->setGeometry(QRect(160, 800, 71, 81));
        KnightW->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
        PawnB2 = new QLabel(centralwidget);
        PawnB2->setObjectName("PawnB2");
        PawnB2->setGeometry(QRect(160, 800, 71, 81));
        PawnB2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        BishopW = new QLabel(centralwidget);
        BishopW->setObjectName("BishopW");
        BishopW->setGeometry(QRect(80, 720, 75, 75));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BishopW->sizePolicy().hasHeightForWidth());
        BishopW->setSizePolicy(sizePolicy1);
        BishopW->setMinimumSize(QSize(75, 75));
        BishopW->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Bishopaya.png")));
        PawnB1 = new QLabel(centralwidget);
        PawnB1->setObjectName("PawnB1");
        PawnB1->setGeometry(QRect(160, 800, 71, 81));
        PawnB1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        btn_GameStart = new QPushButton(centralwidget);
        btn_GameStart->setObjectName("btn_GameStart");
        btn_GameStart->setGeometry(QRect(880, 370, 191, 41));

               no1 = new QLabel(centralwidget);
               no1->setObjectName("no1");
               no1->setGeometry(QRect(160, 800, 61, 71));
               no1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/1g.png")));
               no2 = new QLabel(centralwidget);
               no2->setObjectName("no2");
               no2->setGeometry(QRect(160, 800, 61, 71));
               no2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/2g.png")));
               no3 = new QLabel(centralwidget);
               no3->setObjectName("no3");
               no3->setGeometry(QRect(160, 800, 61, 71));
               no3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/3g.png")));

               no4 = new QLabel(centralwidget);
               no4->setObjectName("no4");
               no4->setGeometry(QRect(160, 800, 61, 71));
               no4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/4g.png")));
               no5 = new QLabel(centralwidget);
               no5->setObjectName("no5");
               no5->setGeometry(QRect(160, 800, 61, 71));
               no5->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/5g.png")));
               no6 = new QLabel(centralwidget);
               no6->setObjectName("no6");
               no6->setGeometry(QRect(160, 800, 61, 71));
               no6->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/6g.png")));


               no7 = new QLabel(centralwidget);
               no7->setObjectName("no7");
               no7->setGeometry(QRect(160, 800, 61, 71));
               no7->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/7g.png")));
               no8 = new QLabel(centralwidget);
               no8->setObjectName("no8");
               no8->setGeometry(QRect(160, 800, 61, 71));
               no8->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/8g.png")));





        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2000, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btn_Close, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_Close->setText(QCoreApplication::translate("MainWindow", "Close Window", nullptr));
        ChessBoard->setText(QString());
        KnightW->setText(QString());
        PawnB2->setText(QString());
        BishopW->setText(QString());
        PawnB1->setText(QString());
        btn_GameStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        no1->setText(QString());
               no2->setText(QString());
               no3->setText(QString());
        no4->setText(QString());
               no5->setText(QString());
               no6->setText(QString());
        no7->setText(QString());
               no8->setText(QString());

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
