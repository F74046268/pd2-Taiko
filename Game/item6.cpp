#include "item6.h"
#include "dialog.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QDebug>
#include <QVector>

item6::item6()
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

QRectF item6::boundingRect() const
{
    return QRect(0,0,90,10);
}

void item6::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
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

void item6::advance(int phase)
{
    if(!phase) return;
    QPointF location = this->pos();


    setPos(mapToParent(0,speed));
}
void item6::keyPressEvent(QKeyEvent *event)
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
void item6::spawn()
{



    item6 *drum = new item6();

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
        delete this;
    }

}



void item6::DoCollision()
{

}
