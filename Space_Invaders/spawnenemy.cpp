#include "spawnenemy.h"
#include "enemy.h"
#include "game.h"
#include "globalvariables.h"

#include <QGraphicsScene>
#include <stdlib.h>

extern Game* game;

SpawnEnemy::SpawnEnemy() : QObject(), QGraphicsRectItem()
{

}

void SpawnEnemy::spawnE()
{
    Enemy* enemy;
    const int randEnemy = rand() % 3+1;
    switch(randEnemy)
    {
    case 1:
        enemy = new Enemy(ENEMY_SPEED,2,ENEMY_SKIN1);
        break;
    case 2:
        enemy = new Enemy(ENEMY_SPEED,2,ENEMY_SKIN2);
        break;
    case 3:
        enemy = new Enemy(ENEMY_SPEED,2,ENEMY_SKIN3);
        break;

    default:
        enemy = new Enemy(ENEMY_SPEED,2);
    }

    scene()->addItem(enemy);
}
