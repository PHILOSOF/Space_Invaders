#include "enemy.h"
#include "globalvariables.h"
#include "game.h"

#include <stdlib.h>
#include <QTimer>
#include <QGraphicsScene>

extern Game* game;

Enemy::Enemy(int spd, int hlth) : QObject(), QGraphicsPixmapItem()
{
    const int randPosX = rand() % (SCREEN_WIDTH - ENEMY_WIDTH);
    this->setPos(randPosX, 0);
    setPixmap(QPixmap(":/images/enemy1.png"));
    //this->setRect(0, 0, ENEMY_WIDTH, ENEMY_HEIGHT);

    QTimer* timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(30);
}

Enemy::Enemy(int spd, int hlth, const QString skinPath): QObject(), QGraphicsPixmapItem()
{
    const int randPosX = rand() % (SCREEN_WIDTH - ENEMY_WIDTH);
    this->setPos(randPosX, 0);
    setPixmap(QPixmap(skinPath));
    health= hlth;
    speed = spd;

    QTimer* timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(30);
}

int Enemy::GetHeath()
{
    return health;
}

void Enemy::decreaseHealth()
{
    --health;
}

void Enemy::move()
{
    setPos(x(), y() + speed);

    if(y() > SCREEN_HEIGHT)
    {

        game->health->decreaseHealth();
        scene()->removeItem(this);
        delete this;
    }
}
