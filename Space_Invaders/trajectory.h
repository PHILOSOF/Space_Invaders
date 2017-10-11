#ifndef TRAJECTORY_H
#define TRAJECTORY_H

class Enemy;
#include"enemy.h"
class Trajectory
{
protected:
    Enemy* enemy;
    int x;
    int y;
public:
    Trajectory(Enemy*enm);
    Trajectory();
   virtual int moveX(int speed,int x)=0;
   virtual int moveY(int speed,int y)=0;
};

#endif // TRAJECTORY_H
