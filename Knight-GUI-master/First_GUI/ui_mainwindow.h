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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *ChessBoard;
    QLabel *KnightW;
    QLabel *PawnB2;
    QLabel *BishopW;
    QLabel *PawnB1;
    QPushButton *btn_GameStart;
    QLabel *label;
    QLabel *label_2;
    QLabel *lbl_result;
    QTextEdit *te_Src;
    QTextEdit *te_Dest;
    QLabel *label_3;
    QTextEdit *te_Pwn;
    QPushButton *btn_addPwn;
    QLabel *PawnB3;
    QLabel *PawnB4;
    QLabel *PawnB5;
    QLabel *PawnB6;
    QLabel *PawnB7;
    QLabel *PawnB8;
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
        ChessBoard = new QLabel(centralwidget);
        ChessBoard->setObjectName("ChessBoard");
        ChessBoard->setGeometry(QRect(160, 110, 700, 700));
        ChessBoard->setBaseSize(QSize(700, 700));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        ChessBoard->setFont(font);
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
        btn_GameStart->setGeometry(QRect(870, 340, 191, 41));
        QFont font1;
        font1.setPointSize(18);
        btn_GameStart->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(840, 270, 141, 20));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(840, 310, 141, 20));
        label_2->setFont(font2);
        lbl_result = new QLabel(centralwidget);
        lbl_result->setObjectName("lbl_result");
        lbl_result->setGeometry(QRect(870, 510, 461, 101));
        lbl_result->setFont(font1);
        te_Src = new QTextEdit(centralwidget);
        te_Src->setObjectName("te_Src");
        te_Src->setEnabled(true);
        te_Src->setGeometry(QRect(1000, 273, 111, 21));
        te_Src->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Src->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Dest = new QTextEdit(centralwidget);
        te_Dest->setObjectName("te_Dest");
        te_Dest->setEnabled(true);
        te_Dest->setGeometry(QRect(1000, 310, 111, 21));
        te_Dest->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Dest->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(840, 390, 141, 20));
        label_3->setFont(font2);
        te_Pwn = new QTextEdit(centralwidget);
        te_Pwn->setObjectName("te_Pwn");
        te_Pwn->setEnabled(true);
        te_Pwn->setGeometry(QRect(1000, 390, 111, 21));
        te_Pwn->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Pwn->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        btn_addPwn = new QPushButton(centralwidget);
        btn_addPwn->setObjectName("btn_addPwn");
        btn_addPwn->setGeometry(QRect(1160, 370, 171, 61));
        btn_addPwn->setFont(font2);
        PawnB3 = new QLabel(centralwidget);
        PawnB3->setObjectName("PawnB3");
        PawnB3->setGeometry(QRect(160, 800, 71, 81));
        PawnB3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB4 = new QLabel(centralwidget);
        PawnB4->setObjectName("PawnB4");
        PawnB4->setGeometry(QRect(160, 800, 71, 81));
        PawnB4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB5 = new QLabel(centralwidget);
        PawnB5->setObjectName("PawnB5");
        PawnB5->setGeometry(QRect(160, 800, 71, 81));
        PawnB5->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB6 = new QLabel(centralwidget);
        PawnB6->setObjectName("PawnB6");
        PawnB6->setGeometry(QRect(160, 800, 71, 81));
        PawnB6->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB7 = new QLabel(centralwidget);
        PawnB7->setObjectName("PawnB7");
        PawnB7->setGeometry(QRect(160, 800, 71, 81));
        PawnB7->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB8 = new QLabel(centralwidget);
        PawnB8->setObjectName("PawnB8");
        PawnB8->setGeometry(QRect(160, 800, 71, 81));
        PawnB8->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2000, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ChessBoard->setText(QString());
        KnightW->setText(QString());
        PawnB2->setText(QString());
        BishopW->setText(QString());
        PawnB1->setText(QString());
        btn_GameStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Starting Position", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Target Position", nullptr));
        lbl_result->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Pawn Position", nullptr));
        btn_addPwn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        PawnB3->setText(QString());
        PawnB4->setText(QString());
        PawnB5->setText(QString());
        PawnB6->setText(QString());
        PawnB7->setText(QString());
        PawnB8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
