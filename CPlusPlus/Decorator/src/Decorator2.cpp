/*************************************************************************
    > File Name: Decorator2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 16时12分10秒
 ************************************************************************/

#include"Decorator2.h"
#include<iostream>

using namespace std;

Decorator2::Decorator2(MobilePhone* tempPhone):Decorator(tempPhone)
{
	;
}

Decorator2::~Decorator2()
{
	;
}

void Decorator2::ShowDecorate()
{
	Decorator::ShowDecorate();
	AddDecorate();
}

void Decorator2::AddDecorate()
{
	cout<<"增加Decorator2"<<endl;
}
