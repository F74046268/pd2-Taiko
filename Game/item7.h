#ifndef ITEM7_H
#define ITEM7_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item7  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item7();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item7 *drum ;
    void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM7_H
