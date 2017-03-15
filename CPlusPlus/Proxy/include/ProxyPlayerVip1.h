/*************************************************************************
    > File Name: ProxyPlayerVip1.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月15日 星期三 16时30分23秒
 ************************************************************************/

#ifndef _PROXYPLAYERVIP1_H_
#define _PROXYPLAYERVIP1_H_

#include"Play.h"
#include<memory>

class ProxyPlayerVip1:public Play
{
public:
	ProxyPlayerVip1();
	virtual void Play1();
	virtual void Play2();
	virtual void Play3();
private:
	std::shared_ptr<Play> player;
};
#endif
