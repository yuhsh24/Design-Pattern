/*************************************************************************
    > File Name: Iphone.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 14时35分21秒
 ************************************************************************/

#ifndef _IPHONE_H_
#define _IPHONE_H_

#include"MobilePhone.h"

class Iphone:public MobilePhone
{
public:
	virtual ~Iphone();
	virtual void RunSoftware(Software* soft);
};
#endif
