#include "item18.h"
#include "dialog.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDebug>
#include <QVector>
item18::item18()
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
QRectF item18::boundingRect() const
{
    return QRect(0,0,90,10);
}

void item18::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
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
void item18::advance(int phase)
{
    if(!phase) return;
    QPointF location = this->pos();


    setPos(mapToParent(0,speed));
}


void item18::spawn()
{
    item18 *drum = new item18();

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

void item18::DoCollision()
{

}
