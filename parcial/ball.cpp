#include "ball.h"


ball::ball(QGraphicsItem *parent)
{

}

void ball::move()
{

}

void ball::change_speed()
{

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
