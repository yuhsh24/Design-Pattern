/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时43分06秒
 ************************************************************************/

#include<iostream>
#include"SiegeTank.h"

using namespace std;

int main()
{
	SiegeTank tank;
	tank.EnterSiegeMode();
	tank.Move(1,1);
	tank.Attack();
	tank.EnterTankMode();
	tank.Move(5,5);
	tank.Attack();
	return 0;
}
