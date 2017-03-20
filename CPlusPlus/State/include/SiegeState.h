/*************************************************************************
    > File Name: SiegeState.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时21分19秒
 ************************************************************************/

#ifndef _SIEGESTATE_H_
#define _SIEGESTATE_H_

#include"SiegeTankState.h"

class SiegeState:public SiegeTankState
{
public:
	~SiegeState();
	virtual void Attack();
	virtual void Move(int x, int y);
};
#endif
