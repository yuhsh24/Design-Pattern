/*************************************************************************
    > File Name: TankState.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时22分40秒
 ************************************************************************/

#ifndef _TANKSTATE_H_
#define _TANKSTATE_H_

#include"SiegeTankState.h"

class TankState:public SiegeTankState
{
public:
	~TankState();
	virtual void Attack();
	virtual void Move(int x, int y);
};
#endif
