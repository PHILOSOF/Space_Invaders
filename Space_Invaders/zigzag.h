#ifndef ZIGZAG_H
#define ZIGZAG_H
#include "trajectory.h"

class Zigzag:public Trajectory
{
protected:

public:
    Zigzag(Enemy *enm);
   int moveX(int speed,int x);
   int moveY(int speed,int y);
};

#endif // ZIGZAG_H
