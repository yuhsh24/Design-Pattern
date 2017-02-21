/*************************************************************************
    > File Name: AmdFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时22分33秒
 ************************************************************************/

#ifndef _AMDFACTORY_H_
#define _AMDFACTORY_H_

#include"Factory.h"

class AmdFactory:public Factory
{
public:
	virtual ~AmdFactory();
	virtual Cpu* CreateCpu();
	virtual MainBoard* CreateMainBoard();
};
#endif
