#include "bullet.h"
#include "globalvariables.h"
#include "enemy.h"
#include "game.h"

#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>

extern Game* game;

Bullet::Bullet(int x, int y, QGraphicsItem* parent) : QObject(), QGraphicsRectItem(parent)
{
    this->setRect(x, y, BULLET_WIDTH, BULLET_HEIGHT );

    QTimer* timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(30);
}

void Bullet::move()
{
    QList<QGraphicsItem*> collItems = collidingItems();
    for(size_t i = 0; i < collItems.size(); ++i)
    {
        if(typeid(*collItems[i]) == typeid(Enemy))
        {
            game->score->increaseScore();

            scene()->removeItem(collItems[i]);
            scene()->removeItem(this);

            delete collItems[i];
            delete this;
            return;
        }
    }

    this->setPos(this->x(), this->y() - BULLET_SPEED);

    if(rect().y() + BULLET_HEIGHT < 0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
