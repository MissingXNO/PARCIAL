#include "ball.h"
#include "wall.h"
#include "QDebug"
#include "qdebug.h"

extern wall * Wall;

ball::ball(QGraphicsItem *parent)
{
    QTimer *movtimer = new QTimer();
    connect(movtimer,SIGNAL(timeout()),this,SLOT(move()));
    movtimer->start(10);

    QTimer *acelerate = new QTimer();
    connect(acelerate,SIGNAL(timeout()),this,SLOT(change_speed()));
    acelerate->start(10);
}

void ball::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (wall) ){
            vy=-5;
            qDebug("colision");
            }
        }

    setPos(x()+vx,y()+vy);
    if(y()>400)
        setPos(0,0);
}

void ball::change_speed()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid (wall) ){
                qDebug("colision");
            }
        }
    if(vy<=vyf)
    {
        vy+=g;
    }
}

QRectF ball::boundingRect() const
{
    return QRectF(-5,-5,10,10);
}

void ball::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::green);
    painter->drawEllipse(boundingRect());
}
