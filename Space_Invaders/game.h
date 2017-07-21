#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "score.h"
#include"health.h"

#include <QGraphicsScene>
#include <QGraphicsView>


class Game : public QGraphicsView
{
public:
    QGraphicsScene* scene;
    Player* player;
    Score* score;
    Health* health;
public:
    Game();
    void start();
};

#endif // GAME_H
