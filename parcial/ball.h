#ifndef BALL_H
#define BALL_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QPainter>

class ball : public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
public:
    ball(QGraphicsItem * parent = 0);
    QTimer *movtimer;
    QTimer *acelerate;
public slots:
    void move();
    void change_speed();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
private:
    float vx=1.4;     //speed in x
    float vy=0;      //speed in y
    float g=0.1;   //equivalent of gravity
    float vyf=4.00;   //top-speed in free-fall

signals:

};

#endif // BALL_H
