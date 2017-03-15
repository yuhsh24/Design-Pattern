/*************************************************************************
    > File Name: ProxyPlayerVip1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月15日 星期三 19时57分12秒
 ************************************************************************/

#include"ProxyPlayerVip1.h"
#include"Player.h"
#include<iostream>

using namespace std;

ProxyPlayerVip1::ProxyPlayerVip1():player(make_shared<Player>())
{
	;
}

void ProxyPlayerVip1::Play1()
{
	player->Play1();
}

void ProxyPlayerVip1::Play2()
{
	player->Play2();
}

void ProxyPlayerVip1::Play3()
{
	cout<<"没有权限"<<endl;
}
