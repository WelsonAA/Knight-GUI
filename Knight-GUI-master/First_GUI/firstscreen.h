#ifndef FIRSTSCREEN_H
#define FIRSTSCREEN_H

#include <QMainWindow>
#include <QPixmap>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class firstscreen; }
QT_END_NAMESPACE

class firstscreen : public QMainWindow
{
    Q_OBJECT

public:

    firstscreen(QWidget *parent = nullptr);

    ~firstscreen();

private slots:

    void on_btn_GameStart_clicked();

private:
    Ui::firstscreen *ui;

};

#endif // FIRSTSCREEN_H
