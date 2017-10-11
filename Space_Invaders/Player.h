#ifndef PLAYER_H
#define PLAYER_H
#include <QMediaPlayer>
#include <QGraphicsPixmapItem>

class Player : public QGraphicsPixmapItem
{
public:
    Player();
    void keyPressEvent(QKeyEvent* key);
private:
    QMediaPlayer* bulletSound;
};

#endif // PLAYER_H
