#ifndef ITEM_H
#define ITEM_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>


class item  : public QObject,  public QGraphicsItem
{
    Q_OBJECT
public:
    item();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
 //   static  item *drum ;
   void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM_H
