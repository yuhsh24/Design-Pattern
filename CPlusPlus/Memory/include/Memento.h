/*************************************************************************
    > File Name: Memento.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月23日 星期四 16时32分09秒
 ************************************************************************/

#ifndef _MEMENTO_H_
#define _MEMENTO_H_

class Memento
{
public:
	Memento();
	Memento(const int vit, const int att, const int def);
	~Memento();
	Memento(const Memento& mem);
	Memento& operator=(const Memento& mem);
	int GetVitality() const;
	int GetAttack() const;
	int GetDefence() const;
private:
	int vitality;
	int attack;
	int defence;
};
#endif
