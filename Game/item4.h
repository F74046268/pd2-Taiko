#ifndef ITEM4_H
#define ITEM4_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item4  : public QObject,  public QGraphicsItem
{
        Q_OBJECT
public:
    item4();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item4 *drum ;
    void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM4_H
