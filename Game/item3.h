#ifndef ITEM3_H
#define ITEM3_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item3  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item3();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item3 *drum ;
    void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM3_H
