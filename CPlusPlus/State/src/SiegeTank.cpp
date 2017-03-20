/*************************************************************************
    > File Name: SiegeTank.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时49分53秒
 ************************************************************************/

#include"SiegeTank.h"

using namespace std;

SiegeTank::SiegeTank():pSiegeState(make_shared<SiegeState>()),pTankState(make_shared<TankState>())
{
	pSiegeTankState=pSiegeState;
}

SiegeTank::~SiegeTank()
{
	;
}

void SiegeTank::EnterSiegeMode()
{
	pSiegeTankState=pSiegeState;
}

void SiegeTank::EnterTankMode()
{
	pSiegeTankState=pTankState;
}

void SiegeTank::Move(int x, int y)
{
	pSiegeTankState->Move(x,y);
}

void SiegeTank::Attack()
{
	pSiegeTankState->Attack();
}


