#include "spawnheart.h"
#include "heart.h"

#include<QDebug>

#include <QGraphicsScene>
SpawnHeart::SpawnHeart()
{

}

void SpawnHeart::spawnH()
{

    Heart* heart = new Heart;
    scene()->addItem(heart);

}
