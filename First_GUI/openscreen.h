/*#ifndef OPENSCREEN_H
#define OPENSCREEN_H

#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class openscreen;
}

class openscreen : public QDialog
{
    Q_OBJECT

public:
    explicit openscreen(QWidget *parent = nullptr);
    ~openscreen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::openscreen *ui;
    MainWindow *mainwindow;
};

#endif // OPENSCREEN_H*/
