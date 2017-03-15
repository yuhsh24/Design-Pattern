/*************************************************************************
    > File Name: Player.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月15日 星期三 16时19分57秒
 ************************************************************************/

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include"Play.h"

class Player:public Play
{
public:
	virtual void Play1();
	virtual void Play2();
	virtual void Play3();
};
#endif
