#include "wall.h"

wall::wall()
{

}

wall::wall(int x, int y, int w_, int h_)
{
    w = w_;
    h = h_;
    posx = x;
    posy = y;
}

int wall::getW()
{
    return w;
}

int wall::getH()
{
    return h;
}

void wall::setW(int ancho)
{
    w = ancho;
}

void wall::setH(int altura)
{
    h = altura;
}

int wall::getPosx()
{
    return posx;
}

void wall::setPosx(int px)
{
    posx=px;
}

int wall::getPosy()
{
    return posy;
}

void wall::setPosy(int py)
{
    posy = py;
}

QRectF wall::boundingRect() const
{
    return QRectF(posx,posy,w,h);
}

void wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawRect(boundingRect());
}
