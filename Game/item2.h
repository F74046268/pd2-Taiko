#ifndef ITEM2_H
#define ITEM2_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item2  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item2();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item2 *drum ;
    void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM2_H
