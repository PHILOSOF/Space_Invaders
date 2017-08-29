#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>

class Enemy : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
   int health;
   int speed;
public:
    Enemy(int spd, int hlth);
    Enemy(int spd, int hlth, const QString skinPath);
    int GetHeath();
    void decreaseHealth();
public slots:
    void move();

};

#endif // ENEMY_H
