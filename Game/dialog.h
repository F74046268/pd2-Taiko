#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT


public:



    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    friend class item;




private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    QTimer *timer_2;
    QTimer *timer_3;
    QTimer *timer_4;


};

#endif // DIALOG_H
