#ifndef ITEM20_H
#define ITEM20_H
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QObject>

class item20  : public QObject,  public QGraphicsItem
{
    Q_OBJECT
public:
    item20();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

public slots:
    void spawn();

protected:
    void advance(int phase);
private:
    qreal angle;
    qreal speed;
    static  item20 *drum ;
 //   void keyPressEvent(QKeyEvent *event);
    void DoCollision();
};

#endif // ITEM20_H
