#ifndef ITEM15_H
#define ITEM15_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item15  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item15();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item15 *drum ;
 //   void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM15_H
