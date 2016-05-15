#ifndef ITEM11_H
#define ITEM11_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item11  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item11();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item11 *drum ;
 //   void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM11_H
