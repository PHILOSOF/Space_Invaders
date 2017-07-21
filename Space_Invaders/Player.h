#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsRectItem>

class Player : public QGraphicsRectItem
{
public:
    Player();
    void keyPressEvent(QKeyEvent* key);
};

#endif // PLAYER_H
