#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class Bullet : public QObject, public QGraphicsPixmapItem
{
public:
    Bullet(int x, int y, QGraphicsItem* parent = 0);

public slots:
    void move();

private:
    Q_OBJECT
};

#endif // BULLET_H
