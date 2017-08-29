#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "score.h"
#include"health.h"
#include"space.h"
#include "enemy.h"


#include <QGraphicsScene>
#include <QGraphicsView>


class Game : public QGraphicsView
{
public:
    QGraphicsScene* scene;
    Player* player;
    Score* score;
    Health* health;

    Space* space1;
    Space* space2;

    std::vector<Enemy*> enamies;
public:
    Game();
    void start();
};

#endif // GAME_H
