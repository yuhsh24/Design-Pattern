/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月15日 星期三 20时05分00秒
 ************************************************************************/

#include<iostream>
#include"ProxyPlayerVip1.h"
#include"ProxyPlayerVip2.h"
#include"Play.h"
#include<memory>

using namespace std;

int main()
{
	shared_ptr<Play> player1 = make_shared<ProxyPlayerVip1>();
	shared_ptr<Play> player2 = make_shared<ProxyPlayerVip2>();
	player1->Play1();
	player1->Play2();
	player1->Play3();
	player2->Play1();
	player2->Play2();
	player2->Play3();
	return 0;
}
