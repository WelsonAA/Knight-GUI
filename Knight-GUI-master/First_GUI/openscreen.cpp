/*#include "openscreen.h"
#include "ChessB.h"

#include "ui_openscreen.h"
#include "mainwindow.h"

openscreen::openscreen(QWidget *parent) :QDialog(parent), ui(new Ui::openscreen)
{
    ui->setupUi(this);
}

openscreen::~openscreen()
{
    delete ui;
}

void openscreen::on_pushButton_clicked()
{


    QString initial = ui->initialEnter->text();
    QString target = ui->targetEnter->text();
    ChessB x(initial.toStdString(), target.toStdString());
    hide();
MainWindow w(nullptr, &x);

    mainwindow = new MainWindow(this,&x);

    mainwindow->show();
}*/

