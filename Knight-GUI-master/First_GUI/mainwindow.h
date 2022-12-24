#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ChessB.h"

#include <QPixmap>
//#include"ChessB.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    void takeParameters(string target,string init, char type);
    void setInitial(string initial);
    void setInitial1(string initial);
    void setInitial2(string initial);
    void setInitial3(string initial);
    MainWindow(QWidget *parent = nullptr);
    MainWindow(QWidget *parent=nullptr,ChessB *x=nullptr);
    ~MainWindow();

private slots:

    void on_btn_GameStart_clicked();

private:
    Ui::MainWindow *ui;
    ChessB* game;
};
#endif // MAINWINDOW_H
