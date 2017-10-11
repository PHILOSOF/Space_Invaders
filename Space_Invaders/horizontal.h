#ifndef HORIZONTAL_H
#define HORIZONTAL_H
#include"trajectory.h"

class Horizontal:public Trajectory
{
protected:
    Enemy* enemy;
public:
    Horizontal(Enemy* enm);
   int moveX(int speed,int x);
   int moveY(int speed,int y);
};

#endif // HORIZONTAL_H
