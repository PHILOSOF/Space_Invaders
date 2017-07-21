#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>

class Bullet : public QObject, public QGraphicsRectItem
{
public:
    Bullet(int x, int y, QGraphicsItem* parent = 0);

public slots:
    void move();

private:
    Q_OBJECT
};

#endif // BULLET_H
