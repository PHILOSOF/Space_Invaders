#include "spawnenemy.h"
#include "enemy.h"
#include "game.h"
#include"zigzag.h"
#include"linear.h"
#include"horizontal.h"
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
        enemy = new Enemy(ENEMY_SPEED,2,ENEMY_SKIN1,new Horizontal(enemy));
        break;
    case 2:
        enemy = new Enemy(ENEMY_SPEED,2,ENEMY_SKIN2,new Linear(enemy));
        break;
    case 3:
        enemy = new Enemy(ENEMY_SPEED,2,ENEMY_SKIN3,new Zigzag(enemy));
        break;

    default:
        enemy = new Enemy(ENEMY_SPEED,2);
    }

    scene()->addItem(enemy);
}
