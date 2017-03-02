/*************************************************************************
    > File Name: Decorator1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 14时43分12秒
 ************************************************************************/

#include"Decorator1.h"
#include<iostream>

using namespace std;

Decorator1::Decorator1(MobilePhone* tempPhone):Decorator(tempPhone)
{
	;
}

Decorator1::~Decorator1()
{
	;
}

void Decorator1::ShowDecorate()
{
	Decorator::ShowDecorate();
	AddDecorate();
}

void Decorator1::AddDecorate()
{
	cout<<"增加Decorator1"<<endl;
}

