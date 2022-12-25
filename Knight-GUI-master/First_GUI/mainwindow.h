#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ChessB.h"

#include <QPixmap>
//#include"ChessB.h"
using namespace std;


namespace Ui { class MainWindow; }


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    //void takeParameters(string target,string init, char type);
     void setPawn1(string pos);
    void setInitial1(string initial);
    void setInitial2(string initial);
    void setInitial3(string initial);
    void setInitial4(string initial);
    void setInitial5(string initial);
    void setInitial6(string initial);
    void setInitial7(string initial);
    void setInitial8(string initial);
//    ChessB takeKnightsPlaces();
    void setGame(ChessB *x);
    MainWindow(QWidget *parent = nullptr);
    //MainWindow(QWidget *parent= nullptr,ChessB *x=nullptr);
    ~MainWindow();

private slots:

    void on_btn_GameStart_clicked();

    void on_btn_addPwn_clicked();

private:
    Ui::MainWindow *ui;
    ChessB* game;

};
#endif // MAINWINDOW_H
