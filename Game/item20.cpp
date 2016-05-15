#include "item20.h"
#include "dialog.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDebug>
#include <QVector>
item20::item20()
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
QRectF item20::boundingRect() const
{
    return QRect(0,0,90,10);
}

void item20::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
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

void item20::advance(int phase)
{
    if(!phase) return;
    QPointF location = this->pos();


    setPos(mapToParent(0,speed));
}

void item20::spawn()
{



    item20 *drum = new item20();

    scene()->addItem(drum);

     ////////// make item focusable /////////////
    drum->setFlag(QGraphicsItem::ItemIsFocusable);
    drum->setFocus();
    drum->setFlag(QGraphicsItem::ItemIsSelectable);
    //drum->setSelected(true);

    if(pos().x()<500 && pos().x()>175)
    {
       qDebug() << "good";



\


    }

    if(pos().x()<175 && pos().x()>135)
    {
 //       qDebug() << "perfect";


    }

    if(pos().x()<135 && pos().x()>120)
    {
  //      qDebug() << "good";


    }

    if(pos().x()<120)
    {
 //       qDebug() << "123";
    }

}



void item20::DoCollision()
{

}
