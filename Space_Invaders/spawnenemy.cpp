#include "spawnenemy.h"
#include "enemy.h"

#include <QGraphicsScene>

SpawnEnemy::SpawnEnemy() : QObject(), QGraphicsRectItem()
{

}

void SpawnEnemy::spawn()
{
    Enemy* enemy = new Enemy();
    scene()->addItem(enemy);
}
