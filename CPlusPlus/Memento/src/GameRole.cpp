/*************************************************************************
    > File Name: GameRole.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月23日 星期四 16时25分57秒
 ************************************************************************/

#include"GameRole.h"
#include<iostream>

using namespace std;

GameRole::GameRole():vitality(100), attack(100), defence(100)
{
	;
}

GameRole::~GameRole()
{
	;
}

Memento GameRole::Save()
{
	Memento mem(vitality, attack, defence);
	return mem;
}

void GameRole::Load(const Memento& mem)
{
	vitality=mem.GetVitality();
	attack=mem.GetAttack();
	defence=mem.GetDefence();
}

void GameRole::Show()
{
	cout<<"vitality:"<<vitality<<" "<<"attack:"<<attack<<" "<<"defence:"<<defence<<endl;
}

void GameRole::BeingAttacked()
{
	vitality-=10;
	attack-=10;
	defence-=10;
}
