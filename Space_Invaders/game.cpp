#include "game.h"
#include "globalvariables.h"
#include "spawnenemy.h"
#include"spawnheart.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QDebug>

#include <QGraphicsPixmapItem>

Game::Game() : scene( new QGraphicsScene(0,0, SCREEN_WIDTH, SCREEN_HEIGHT)), QGraphicsView(scene)
{
    //scene = new QGraphicsScene(0,0, SCREEN_WIDTH, SCREEN_HEIGHT);

    //QGraphicsRectItem* rect = new QGraphicsRectItem();
    player = new Player();
    player->setRect(
                PLAYER_START_POSITION_X,
                PLAYER_START_POSITION_Y - PLAYER_HEIGHT - PLAYER_INDENT_FROM_BUTTOM,
                PLAYER_WIDTH, PLAYER_HEIGHT);
    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();


   score = new Score();
   scene->addItem(score);
   health = new Health();
   health->setPos(health->x() + SCREEN_WIDTH/2, health->y());
   scene->addItem(health);

}

void Game::start()
{
    QGraphicsView* view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();


    //QGraphicsPixmapItem* pxmap;
    //pxmap->setPixmap(QPixmap(":/images/bullet.png"));
    //scene->addItem(pxmap);

    QTimer* timer = new QTimer();
    SpawnEnemy* spawnE = new SpawnEnemy();
    scene->addItem(spawnE);
    QObject::connect(timer, SIGNAL(timeout()), spawnE, SLOT(spawnE()));
    SpawnHeart* spawnH = new SpawnHeart();
    scene->addItem(spawnH);
    QObject::connect(timer,SIGNAL(timeout()),spawnH,SLOT(spawnH()));
    timer->start(3000);
}
