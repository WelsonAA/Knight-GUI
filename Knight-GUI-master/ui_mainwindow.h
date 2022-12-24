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
    QPushButton *pushButton_3;
    QLabel *pawn1;
    QLabel *pawn2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *no1;
    QLabel *no2;
    QLabel *no3;
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
        label_2->setGeometry(QRect(160, 800, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 60, 141, 41));
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 800, 75, 75));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(75, 75));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Bishopaya.png")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 800, 61, 71));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
        no1 = new QLabel(centralwidget);
        no1->setObjectName("no1");
        no1->setGeometry(QRect(160, 800, 61, 71));
        no1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
        no2 = new QLabel(centralwidget);
        no2->setObjectName("no2");
        no2->setGeometry(QRect(160, 800, 61, 71));
        no2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
        no3 = new QLabel(centralwidget);
        no3->setObjectName("no3");
        no3->setGeometry(QRect(160, 800, 61, 71));
        no3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
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
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Bishop button", nullptr));
        pawn1->setText(QString());
        pawn2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        no1->setText(QString());
        no2->setText(QString());
        no3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
