/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月22日 星期三 20时57分58秒
 ************************************************************************/

#include"Singleton.h"
#include<iostream>
using namespace std;

int main()
{
	Singleton *instance1=Singleton::GetInstance();
	Singleton *instance2=Singleton::GetInstance();
	if(instance1 == instance2)
	{
		cout<<"This is a successful Singleton."<<endl;
	}
	else
	{
		cout<<"This is not a successful Singleton."<<endl;
	}
	return 0;
}
