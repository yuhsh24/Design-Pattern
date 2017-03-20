/*************************************************************************
    > File Name: SiegeTank.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时26分15秒
 ************************************************************************/

#ifndef _SIEGETANK_H_
#define _SIEGETANK_H_

#include"SiegeTankState.h"
#include"SiegeState.h"
#include"TankState.h"
#include<memory>

class SiegeTank
{
public:
	SiegeTank();
	~SiegeTank();
	void EnterSiegeMode();
	void EnterTankMode();
	void Move(int x, int y);
	void Attack();
private:
	std::shared_ptr<SiegeTankState> pSiegeTankState;
	std::shared_ptr<SiegeState> pSiegeState;
	std::shared_ptr<TankState> pTankState;
};
#endif
