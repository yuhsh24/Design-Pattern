/*************************************************************************
    > File Name: Decorator.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 14时24分21秒
 ************************************************************************/

#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include"MobilePhone.h"

class Decorator:public MobilePhone
{
public:
	Decorator(MobilePhone* tempPhone);
	virtual ~Decorator();
	virtual void ShowDecorate();
private:
	MobilePhone* phone;
};
#endif
