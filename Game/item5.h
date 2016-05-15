#ifndef ITEM5_H
#define ITEM5_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item5  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item5();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item5 *drum ;
    void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM5_H
