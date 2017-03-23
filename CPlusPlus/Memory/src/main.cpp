/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月23日 星期四 16时18分39秒
 ************************************************************************/

#include<iostream>
#include"GameRole.h"
#include"CareTake.h"

using namespace std;

int main()
{
	GameRole gameRole;
	CareTake careTake;
	gameRole.BeingAttacked();
	cout<<"保存的状态如下："<<endl;
	gameRole.Show();
	careTake.SaveMemento(gameRole.Save());
	gameRole.BeingAttacked();
	gameRole.BeingAttacked();
	cout<<"当前的状态如下："<<endl;
	gameRole.Show();
	cout<<"恢复保存的状态如下："<<endl;
	gameRole.Load(careTake.Load());
	gameRole.Show();
	return 0;
}
