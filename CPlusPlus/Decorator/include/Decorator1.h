/*************************************************************************
    > File Name: Decorator1.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 14时33分42秒
 ************************************************************************/

#ifndef _DECORATOR1_H_
#define _DECORATOR1_H_

#include"Decorator.h"

class Decorator1:public Decorator
{
public:
	Decorator1(MobilePhone* tempPhone);
	virtual ~Decorator1();
	void ShowDecorate();
private:
	void AddDecorate();
};
#endif
