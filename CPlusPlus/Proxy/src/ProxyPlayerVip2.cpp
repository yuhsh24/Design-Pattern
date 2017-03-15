/*************************************************************************
    > File Name: ProxyPlayerVip2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月15日 星期三 20时00分54秒
 ************************************************************************/

#include"ProxyPlayerVip2.h"
#include"Player.h"
#include<iostream>

using namespace std;

ProxyPlayerVip2::ProxyPlayerVip2():player(make_shared<Player>())
{
	;
}

void ProxyPlayerVip2::Play1()
{
	player->Play1();
}

void ProxyPlayerVip2::Play2()
{
	player->Play2();
}

void ProxyPlayerVip2::Play3()
{
	player->Play3();
}
