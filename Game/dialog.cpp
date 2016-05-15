#include "dialog.h"
#include "ui_dialog.h"

#include "item.h"
#include "item1.h"
#include "item2.h"
#include "item3.h"
#include "item4.h"
#include "item5.h"
#include "item6.h"
#include "item7.h"
#include "item8.h"
#include "item9.h"
#include "item10.h"
#include "item11.h"
#include "item12.h"
#include "item13.h"
#include "item14.h"
#include "item15.h"
#include "item16.h"
#include "item17.h"
#include "item18.h"
#include "item19.h"
#include "item20.h"

#include <QObject>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>





Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //////////////              make the scene1                 ///////////////////////

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);


   ///////////////             draw the path                    ////////////////////////

    QPainterPath *path = new QPainterPath();
    path->moveTo(120,168);
    path->lineTo(190,168);
    path->lineTo(190,258);
    path->lineTo(120,258);
    path->lineTo(120,168);

    QPen mypen2 = QPen (Qt::black);

    scene->addPath(*path,mypen2);



    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    QPen mypen = QPen (Qt::red);



    scene->setSceneRect(135,168,40,90);

    scene->setSelectionArea(*path);
  //  scene->selectionArea();

    QLineF TopLine3(scene->sceneRect().topLeft(),scene->sceneRect().topRight());
    QLineF LeftLine3(scene->sceneRect().topLeft(),scene->sceneRect().bottomLeft());
    QLineF RightLine3(scene->sceneRect().topRight(),scene->sceneRect().bottomRight());
    QLineF BottomLine3(scene->sceneRect().bottomLeft(),scene->sceneRect().bottomRight());

    scene->addLine(TopLine3,mypen);
    scene->addLine(LeftLine3,mypen);
    scene->addLine(RightLine3,mypen);
    scene->addLine(BottomLine3,mypen);

    scene->setSceneRect(120,168,70,90);

    QLineF TopLine2(scene->sceneRect().topLeft(),scene->sceneRect().topRight());
    QLineF LeftLine2(scene->sceneRect().topLeft(),scene->sceneRect().bottomLeft());
    QLineF RightLine2(scene->sceneRect().topRight(),scene->sceneRect().bottomRight());
    QLineF BottomLine2(scene->sceneRect().bottomLeft(),scene->sceneRect().bottomRight());

    scene->addLine(TopLine2,mypen);
    scene->addLine(LeftLine2,mypen);
    scene->addLine(RightLine2,mypen);
    scene->addLine(BottomLine2,mypen);


    scene->setSceneRect(50,168,590,90);


    QLineF TopLine(scene->sceneRect().topLeft(),scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(),scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topRight(),scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(),scene->sceneRect().bottomRight());

    scene->addLine(TopLine,mypen);
    scene->addLine(LeftLine,mypen);
    scene->addLine(RightLine,mypen);
    scene->addLine(BottomLine,mypen);

    //////////////////////// add timers /////////////////////////

    timer = new QTimer(this);
    timer_2 = new QTimer(this);
    timer_3 = new QTimer(this);
    timer_4 = new QTimer(this);


    ///// add item to the scene ////////////////

    item *myitem = new item();
    scene->addItem(myitem);

    timer->start(25);
    timer_2->start(7000);
  //  connect(timer_3,SIGNAL(timeout()),timer_2,SLOT(start()));
    connect(timer,SIGNAL(timeout()),scene,SLOT(advance()));
    connect(timer_2,SIGNAL(timeout()),myitem,SLOT(spawn()));
//    connect(timer_4,SIGNAL(timeout()),timer_2,SLOT(stop()));


/*
    timer->start(25);
    timer_2->setInterval(4000);
*/




    myitem->setFlag(QGraphicsItem::ItemIsFocusable);
    myitem->setFocus();


//    item11 *myitem11 = new item11();
//    scene->addItem(myitem11);







   //  random_generate();



}





Dialog::~Dialog()
{
    delete ui;
}







