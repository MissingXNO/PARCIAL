#include "ball.h"


ball::ball(QGraphicsItem *parent)
{
    QTimer *movtimer = new QTimer();
    connect(movtimer,SIGNAL(timeout()),this,SLOT(move()));
    movtimer->start(5);

    QTimer *acelerate = new QTimer();
    connect(acelerate,SIGNAL(timeout()),this,SLOT(change_speed()));
    acelerate->start(10);
}

void ball::move()
{
    setPos(x(),y()+v);
}

void ball::change_speed()
{
    if(v<=vf)
    {
        v+=g;
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
