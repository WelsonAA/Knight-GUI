#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPixmap>
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
    ~MainWindow();

private slots:


void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_label_4_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
