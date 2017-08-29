#include "game.h"
#include "globalvariables.h"
#include "spawnenemy.h"
#include"spawnheart.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QDebug>
#include <QMediaPlayer>

#include <QGraphicsPixmapItem>
#include <QPixmap>

Game::Game() : scene( new QGraphicsScene(0,0, SCREEN_WIDTH, SCREEN_HEIGHT)), QGraphicsView(scene)
{
       //scene->addPixmap(QPixmap(":images/space01.png"));
       space1 = new Space(0,-1000,SPACE_PATH1);
       space2 = new Space(0,-2500,SPACE_PATH2);
    scene->addItem(space1);
    scene->addItem(space2);


    player = new Player();
   // QTimer* timer = new QTimer();

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

    QTimer* timerE = new QTimer();
    QTimer* timerH = new QTimer();
    SpawnEnemy* spawnE = new SpawnEnemy();
    scene->addItem(spawnE);
    QObject::connect(timerE, SIGNAL(timeout()), spawnE, SLOT(spawnE()));
    SpawnHeart* spawnH = new SpawnHeart();
    scene->addItem(spawnH);
    QObject::connect(timerH, SIGNAL(timeout()),spawnH,SLOT(spawnH()));
    timerE->start(3000);
    timerH->start(10000);

    QTimer* timer1 = new QTimer;
    space1->connect(timer1,SIGNAL(timeout()),space1,SLOT(move()));
    space2->connect(timer1,SIGNAL(timeout()),space2,SLOT(move()));
     timer1->start(10);

   // QMediaPlayer* media = new QMediaPlayer();
    //media->setMedia(QUrl("qrc:/sounds/main.mp3"));
    //media->play();
}
