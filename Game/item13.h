#ifndef ITEM13_H
#define ITEM13_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item13  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item13();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item13 *drum ;
 //   void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM13_H
