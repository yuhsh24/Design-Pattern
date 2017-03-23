/*************************************************************************
    > File Name: GameRole.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月23日 星期四 16时22分08秒
 ************************************************************************/

#ifndef _GAMEROLE_H_
#define _GAMEROLE_H_

#include"Memento.h"

class GameRole
{
public:
	GameRole();
	~GameRole();
	Memento Save();
	void Load(const Memento& mem);
	void Show();
	void BeingAttacked();
private:
	int vitality;
	int attack;
	int defence;
};
#endif
