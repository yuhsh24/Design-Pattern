/*************************************************************************
    > File Name: ProxyPlayerVip2.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月15日 星期三 16时32分55秒
 ************************************************************************/

#ifndef _PROXYPLAYERVIP2_H_
#define _PROXYPLAYERVIP2_H_

#include"Play.h"
#include<memory>

class ProxyPlayerVip2:public Play
{
public:
	ProxyPlayerVip2();
	virtual void Play1();
	virtual void Play2();
	virtual void Play3();
private:
	std::shared_ptr<Play> player;	
};
#endif
