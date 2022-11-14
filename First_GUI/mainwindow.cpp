#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
//#include <QtGui>
#include <iostream>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::takeParameters(string target,string init, char type)
{
    int x = (target.at(0)-init.at(0))*75;
    int y = (target.at(1)-init.at(1))*75;
    if(type == 'h')
    {
   ui->label_2->move(ui->label_2->x()+x,ui->label_2->y()-y);
    }
    else if(type == 'b')
    {
ui->bishop->move(ui->bishop->x()+x,ui->bishop->y()-y);
    }
    //on_pushButton_2_clicked(x,y);
}

/*
void MainWindow::on_pushButton_2_clicked(int x, int y)
{
ui->label_2->move(ui->label_2->x()+x,ui->label_2->y()+y);
}
*/




void MainWindow::on_pushButton_2_clicked()
{
    takeParameters("f2", "h1",'h');
}


void MainWindow::on_pushButton_3_clicked()
{
        takeParameters("f2", "a1",'b');

}

