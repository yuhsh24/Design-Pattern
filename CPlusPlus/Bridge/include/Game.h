/*************************************************************************
    > File Name: Game.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 15时03分18秒
 ************************************************************************/

#ifndef _GAME_H_
#define _GAME_H_

#include"Software.h"

class Game:public Software
{
public:
	virtual ~Game();
	virtual void Run(std::string str);
};
#endif
