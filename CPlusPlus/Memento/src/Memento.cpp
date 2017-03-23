/*************************************************************************
    > File Name: Memento.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月23日 星期四 16时36分54秒
 ************************************************************************/

#include"Memento.h"

Memento::Memento()
{
	;
}

Memento::Memento(const int vit, const int att, const int def):vitality(vit), attack(att), defence(def)
{
	;
}

Memento::~Memento()
{
	;
}

Memento::Memento(const Memento& mem)
{
	vitality=mem.vitality;
	attack=mem.attack;
	defence=mem.defence;
}

Memento& Memento::operator=(const Memento& mem)
{
	vitality=mem.vitality;
	attack=mem.attack;
	defence=mem.defence;
}

int Memento::GetVitality() const
{
	return vitality;
}

int Memento::GetAttack() const
{
	return attack;
}

int Memento::GetDefence() const
{
	return defence;
}
