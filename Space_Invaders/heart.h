#ifndef HEART_H
#define HEART_H

#include<QObject>
#include<QGraphicsRectItem>

class Heart : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Heart();
public slots:
    void move();
};

#endif // HEART_H
