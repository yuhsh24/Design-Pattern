/*************************************************************************
    > File Name: IntelFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时17分41秒
 ************************************************************************/

#ifndef _INTELFACTORY_H_
#define _INTELFACTORY_H_

#include"Factory.h"

class IntelFactory:public Factory
{
public:
	virtual ~IntelFactory();
	virtual Cpu* CreateCpu();
	virtual MainBoard* CreateMainBoard();
};
#endif
