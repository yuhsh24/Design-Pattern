/*************************************************************************
    > File Name: SiegeState.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时33分04秒
 ************************************************************************/

#include"SiegeState.h"
#include<iostream>

using namespace std;

SiegeState::~SiegeState()
{
	;
}

void SiegeState::Attack()
{
	cout<<"Attacking for 40"<<endl;
}

void SiegeState::Move(int x, int y)
{
	cout<<"Can not move in siege state."<<endl;
}
