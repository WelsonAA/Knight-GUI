#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
//#include <QtGui>
#include <iostream>
#include <string>
#include"ChessB.h"
#include<string>
using namespace std;


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}
/*
MainWindow::MainWindow(QWidget *parent,ChessB *x): QMainWindow(parent), ui(new Ui::MainWindow)
{
 ui->setupUi(this);
    game=x;


}*/
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setInitial1(string initial)
{
    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;
    ui->no1->move(ui->no1->x()+85*x1,ui->no1->y()-85*y1);
}
/*

void MainWindow::setPawn1(string pos)
{
    int x1 = pos[0] - 97;
    int y1  = pos[1]-48;

    ui->PawnB1->move(ui->PawnB1->x()+85*x1,ui->PawnB1->y()-85*y1);
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
    ui->no3->move(ui->no3->x()+84*x1,ui->no3->y()-84*y1);
}
void MainWindow::setInitial4(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;

    ui->no4->move(ui->no4->x()+85*x1,ui->no4->y()-85*y1);
}
void MainWindow::setInitial5(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;
    ui->no5->move(ui->no5->x()+85*x1,ui->no5->y()-85*y1);
}
void MainWindow::setInitial6(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;

    ui->no6->move(ui->no6->x()+85*x1,ui->no6->y()-85*y1);
}

void MainWindow::setInitial7(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;
    ui->no7->move(ui->no7->x()+85*x1,ui->no7->y()-85*y1);
}
void MainWindow::setInitial8(string initial)
{

    int x1 = initial[0] - 97;
    int y1  = initial[1]-48;

    ui->no8->move(ui->no8->x()+85*x1,ui->no8->y()-85*y1);
}

void MainWindow::on_pushButton_3_clicked()
{
       // takeParameters("b2", "a1",'b');

}

void MainWindow::on_pushButton_2_clicked()
{

    //takeParameters("d3", "h1",'h');
}

//ChessB MainWindow::takeKnightsPlaces()
//{
////    QString initial = ui->initText->text();
////    QString target = ui->targetText->text();
////    ChessB x(initial.toStdString(), target.toStdString());
////   return x;


//}
*/
void MainWindow::setGame(string src,string dest)
{
    ChessB x(src,dest);
    game = x;
    game.addNexts();


}

void MainWindow::on_btn_GameStart_clicked()
{
     ui->lbl_result->setText(QString::fromStdString(""));
    string src=ui->te_Src->toPlainText().toLocal8Bit().constData();
    string dest=ui->te_Dest->toPlainText().toLocal8Bit().constData();
    if(game.isValid(src) && game.isValid(dest)){

        setGame(src,dest);
        int x1 = src[0] - 97;
        int y1  = src[1]-48;

        ui->KnightW->move(ui->KnightW->x()+85*x1,ui->KnightW->y()-85*y1);
        ui->btn_GameStart->setEnabled(false);
    }
    else
    {
        ui->lbl_result->setText(QString::fromStdString("Invalid position"));
    }

    if(!game.pathK.empty()){
        setInitial1(game.pathK.front()->pos);
        game.pathK.pop();}

/*

    if(!game->pathK.empty()){
    setInitial2(game->pathK.front()->pos);
    game->pathK.pop();}

    if(!game->pathK.empty()){
    setInitial3(game->pathK.front()->pos);
    game->pathK.pop();}

    if(!game->pathK.empty()){
    setInitial4(game->pathK.front()->pos);
    game->pathK.pop();}

    if(!game->pathK.empty()){
    setInitial5(game->pathK.front()->pos);
    game->pathK.pop();}
    if(!game->pathK.empty()){
    setInitial6(game->pathK.front()->pos);
    game->pathK.pop();}
    if(!game->pathK.empty()){
    setInitial7(game->pathK.front()->pos);
    game->pathK.pop();}
    if(!game->pathK.empty()){
    setInitial8(game->pathK.front()->pos);
    game->pathK.pop();}

*/

//   ui->KnightW->setGeometry(QRect(160+(game->src->pos[0]-'a')*87,710,87,87));
}


void MainWindow::on_btn_addPwn_clicked()
{
    ui->lbl_result->setText(QString::fromStdString(""));
    string pwnPos=ui->te_Pwn->toPlainText().toLocal8Bit().constData();
if(game.isValid(pwnPos) && game.cb[pwnPos[1]-'1'][pwnPos[0]-'a'].currentPiece == '+'){

    game.putPawn(pwnPos);
    ui->te_Pwn->setPlainText(QString::fromStdString(""));
    setPawn(pwnPos);

//                game.addPathK(game.dest, 0);
//                game.choosePathK();

}

else
{
    ui->lbl_result->setText(QString::fromStdString("Invalid pawn position"));
}


}
void MainWindow::setPawn(string pos)
{

    static int x=1;
        int x1 = pos[0] - 97;
        int y1  = pos[1]- 48;
        if(x==1){
            ui->PawnB1->move(ui->PawnB1->x()+85*x1,ui->PawnB1->y()-85*y1);
             x++;
        }else if(x==2){
            ui->PawnB2->move(ui->PawnB2->x()+85*x1,ui->PawnB2->y()-85*y1);
             x++;
        }else if(x==3){
            ui->PawnB3->move(ui->PawnB3->x()+85*x1,ui->PawnB3->y()-85*y1);
             x++;
        }else if(x==4){
            ui->PawnB4->move(ui->PawnB4->x()+85*x1,ui->PawnB4->y()-85*y1);
             x++;
        }else if(x==5){
            ui->PawnB5->move(ui->PawnB5->x()+85*x1,ui->PawnB5->y()-85*y1);
             x++;
        }else if(x==6){
            ui->PawnB6->move(ui->PawnB6->x()+85*x1,ui->PawnB6->y()-85*y1);
             x++;
        }else if(x==7){
            ui->PawnB7->move(ui->PawnB7->x()+85*x1,ui->PawnB7->y()-85*y1);
             x++;
        }else if(x==8){
            ui->PawnB8->move(ui->PawnB8->x()+85*x1,ui->PawnB8->y()-85*y1);
             x++;
               ui->btn_addPwn->setEnabled(false);
               ui->lbl_result->setText(QString::fromStdString("Maximum Number of Pawns is 8"));
        }






//    switch (x){
//    case 1:{
//        ui->PawnB1->move(ui->PawnB1->x()+85*x1,ui->PawnB1->y()-85*y1);
//        x++;
//        break;
//    }
//    case 2:{
//
//        x++;
//        break;
//    }
//        default:{
//        ui->lbl_result->setText(QString::fromStdString("Maximum Number of Pawns is 8"));
//    }
//    }
}

