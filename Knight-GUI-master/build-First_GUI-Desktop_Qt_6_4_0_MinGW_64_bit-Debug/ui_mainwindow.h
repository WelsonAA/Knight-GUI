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
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *bishop;
    QPushButton *pushButton_3;
    QLabel *pawn1;
    QLabel *pawn2;
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 60, 200, 50));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        pushButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 110, 700, 700));
        label->setBaseSize(QSize(700, 700));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/720px-Chessboard480.svg.png")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(752, 711, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 60, 141, 41));
        bishop = new QLabel(centralwidget);
        bishop->setObjectName("bishop");
        bishop->setGeometry(QRect(163, 717, 75, 75));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bishop->sizePolicy().hasHeightForWidth());
        bishop->setSizePolicy(sizePolicy1);
        bishop->setMinimumSize(QSize(75, 75));
        bishop->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Bishopaya.png")));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(530, 60, 141, 41));
        pawn1 = new QLabel(centralwidget);
        pawn1->setObjectName("pawn1");
        pawn1->setGeometry(QRect(330, 460, 61, 81));
        pawn1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        pawn2 = new QLabel(centralwidget);
        pawn2->setObjectName("pawn2");
        pawn2->setGeometry(QRect(583, 376, 71, 81));
        pawn2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2000, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Close Window", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Knight button", nullptr));
        bishop->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Bishop button", nullptr));
        pawn1->setText(QString());
        pawn2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H