#ifndef ITEM16_H
#define ITEM16_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item16  : public QObject,  public QGraphicsItem
{

    Q_OBJECT
public:
    item16();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item16 *drum ;
 //   void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM16_H
