/*************************************************************************
    > File Name: Samsung.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 14时50分27秒
 ************************************************************************/

#ifndef _SAMSUNG_H_
#define _SAMSUNG_H_

#include"MobilePhone.h"

class Samsung:public MobilePhone
{
public:
	virtual ~Samsung();
	virtual void RunSoftware(Software* soft);
};
#endif
