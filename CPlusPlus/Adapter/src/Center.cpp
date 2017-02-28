/*************************************************************************
    > File Name: Center.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月28日 星期二 14时29分03秒
 ************************************************************************/

#include"Center.h"
#include<string>
#include<iostream>

using namespace std;

Center::Center(const string& str):name(str)
{
	;
}

Center::~Center()
{
	;
}

void Center::Attack()
{
	cout<<"Center Attack!"<<endl;
}

void Center::Defence()
{
	cout<<"Center Defence!"<<endl;
}


