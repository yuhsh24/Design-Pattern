/*************************************************************************
    > File Name: Decorator2.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 14时33分51秒
 ************************************************************************/

#ifndef _DECORATOR2_H_
#define _DECORATOR2_H_

#include"Decorator.h"

class Decorator2:public Decorator
{
public:
	Decorator2(MobilePhone* tempPhone);
	virtual ~Decorator2();
	void ShowDecorate();
private:
	void AddDecorate();
};
#endif
