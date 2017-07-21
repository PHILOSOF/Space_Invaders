#include "enemy.h"
#include "globalvariables.h"
#include "game.h"

#include <stdlib.h>
#include <QTimer>
#include <QGraphicsScene>

extern Game* game;

Enemy::Enemy() : QObject(), QGraphicsRectItem()
{
    const int randPosX = rand() % (SCREEN_WIDTH - ENEMY_WIDTH);
    this->setPos(randPosX, 0);

    this->setRect(0, 0, ENEMY_WIDTH, ENEMY_HEIGHT);

    QTimer* timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(30);
}

void Enemy::move()
{
    setPos(x(), y() + ENEMY_SPEED);

    if(y() > SCREEN_HEIGHT)
    {

        game->health->decreaseHealth();
        scene()->removeItem(this);
        delete this;
    }
}
