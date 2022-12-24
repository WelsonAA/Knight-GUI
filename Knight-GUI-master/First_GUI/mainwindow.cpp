#include "mainwindow.h"

#include "ui_mainwindow.h"
#include <QtCore>
//#include <QtGui>
#include <iostream>
#include <string>
#include"ChessB.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}
MainWindow::MainWindow(QWidget *parent,ChessB *x): QMainWindow(parent), ui(new Ui::MainWindow)
{
    game=x;
    ui->setupUi(this);

}
MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::takeParameters(string target,string init, char type)
{

    int x1 = (target.at(0)-init.at(0))*83;
    int y1 = (target.at(1)-init.at(1))*83;

     if(type == 'h'){

        ui->no1->move(ui->no1->x()+x1,ui->no1->y()-y1);
    }
    else if(type == 'b'){
        ui->no2->move(ui->no2->x()+x1,ui->no2->y()-y1);
    }
}
void MainWindow::setInitial(string initial)
{
    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;
    ui->no1->move(ui->no1->x()+85*x1,ui->no1->y()-85*y1);
}

void MainWindow::setInitial1(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;
    ui->no1->move(ui->no1->x()+85*x1,ui->no1->y()-85*y1);
}
void MainWindow::setInitial2(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;
    ui->no2->move(ui->no2->x()+85*x1,ui->no2->y()-85*y1);
}
void MainWindow::setInitial3(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;

    ui->no2->move(ui->no2->x()+87.5*x1,ui->no2->y()-87.5*y1);
}

void MainWindow::on_pushButton_2_clicked()
{

    takeParameters("d3", "h1",'h');
}


void MainWindow::on_pushButton_3_clicked()
{
        takeParameters("b2", "a1",'b');

}*/





void MainWindow::on_btn_GameStart_clicked()
{
    ui->KnightW->setGeometry()
}

