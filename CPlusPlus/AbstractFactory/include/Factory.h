/*************************************************************************
    > File Name: Factory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时15分00秒
 ************************************************************************/

#ifndef _FACTORY_H_
#define _FACTORY_H_

#include"Cpu.h"
#include"MainBoard.h"

class Factory
{
public:
	virtual ~Factory();
	virtual Cpu* CreateCpu()=0;
	virtual MainBoard* CreateMainBoard()=0;
};
#endif
