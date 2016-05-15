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
#include "dialog.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDebug>
#include <QVector>

item::item()
{

    angle=(90);
    setRotation(angle);
    //set speed

    speed = 3;
    //start position
    int StartX = 168;
    int StartY = -638;

    setPos(mapToParent(StartX,StartY));

}

QRectF item::boundingRect() const
{
    return QRect(0,0,90,10);
}

void item::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush Brush(Qt::gray);

    if(scene()->collidingItems(this).isEmpty())
    {
        Brush.setColor(Qt::green);
    }
    else
    {
        Brush.setColor(Qt::red);
    }

    painter->fillRect(rec,Brush);
    painter->drawRect(rec);
}

void item::advance(int phase)
{
    if(!phase) return;
    QPointF location = this->pos();


    setPos(mapToParent(0,speed));
}




void item::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == Qt::Key_F)
    {

        if(pos().x()<190 && pos().x()>120)
        {
           qDebug() << "good";

           scene()->removeItem(this);
           deleteLater();

        }


        if(pos().x()<50)
        {
            deleteLater();
        }




    }
}

void item::spawn()
{


    if((1+qrand()%9) == 1)
    {
        item *drum = new item();
        scene()->addItem(drum);
        drum->setFlag(QGraphicsItem::ItemIsFocusable);
        drum->setFocus();
    }

    else if((1+qrand()%9) == 2)
    {
        item1 *drum1 = new item1();
        scene()->addItem(drum1);

        drum1->setFlag(QGraphicsItem::ItemIsFocusable);
        drum1->setFocus();
    }
    else if((1+qrand()%9) == 3)
    {
        item2 *drum2 = new item2();
        scene()->addItem(drum2);
        drum2->setFlag(QGraphicsItem::ItemIsFocusable);
        drum2->setFocus();
    }
    else if((1+qrand()%9) == 4)
    {
        item3 *drum3 = new item3();
        scene()->addItem(drum3);
        drum3->setFlag(QGraphicsItem::ItemIsFocusable);
        drum3->setFocus();
    }
    else if((1+qrand()%9) == 5)
    {
        item4 *drum4 = new item4();
        scene()->addItem(drum4);
        drum4->setFlag(QGraphicsItem::ItemIsFocusable);
        drum4->setFocus();
    }
    else if((1+qrand()%9) == 6)
    {
        item5 *drum5 = new item5();
        scene()->addItem(drum5);
        drum5->setFlag(QGraphicsItem::ItemIsFocusable);
        drum5->setFocus();
    }
    else if((1+qrand()%9) == 7)
    {
        item6 *drum6 = new item6();
        scene()->addItem(drum6);
        drum6->setFlag(QGraphicsItem::ItemIsFocusable);
        drum6->setFocus();
    }
    else if((1+qrand()%9) == 8)
    {
        item7 *drum7 = new item7();
        scene()->addItem(drum7);  drum7->setFlag(QGraphicsItem::ItemIsFocusable);
        drum7->setFocus();
    }
    else if((1+qrand()%9) == 9)
    {
        item8 *drum8 = new item8();
        scene()->addItem(drum8);
        drum8->setFlag(QGraphicsItem::ItemIsFocusable);
        drum8->setFocus();

    }










     ////////// make item focusable /////////////












}



void item::DoCollision()
{

}
