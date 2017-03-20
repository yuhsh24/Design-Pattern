/*************************************************************************
    > File Name: TankState.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时36分01秒
 ************************************************************************/

#include"TankState.h"
#include<iostream>

using namespace std;

TankState::~TankState()
{
	;
}

void TankState::Attack()
{
	cout<<"Attack for 20"<<endl;
}

void TankState::Move(int x, int y)
{
	cout<<"Move to ("<<x<<","<<y<<")"<<endl;
}
