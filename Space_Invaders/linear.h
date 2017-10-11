#ifndef LINEAR_H
#define LINEAR_H
#include"trajectory.h"


class Linear:public Trajectory
{

protected:
    Enemy* enemy;
public:
    Linear(Enemy* enm);
   int moveX(int speed,int x);
   int moveY(int speed,int y);
};


#endif // LINEAR_H
