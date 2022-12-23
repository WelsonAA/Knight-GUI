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
//    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
//            ui->progressBar,SLOT(setValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::takeParameters(string target,string init, char type)
{
    int x1 = (target.at(0)-init.at(0))*83;
    int y1 = (target.at(1)-init.at(1))*83;
     ui->label_2->move(ui->label_2->x()+(init[0]*83),ui->label_2->y()+(init[1]*83));
    if(type == 'h'){

        ui->label_2->move(ui->label_2->x()+x1,ui->label_2->y()-y1);
    }
    else if(type == 'b'){
        ui->label_3->move(ui->label_3->x()+x1,ui->label_3->y()-y1);
    }
}




void MainWindow::on_pushButton_2_clicked()
{
    takeParameters("d3", "h1",'h');
}


void MainWindow::on_pushButton_3_clicked()
{
        takeParameters("b2", "a1",'b');

}

