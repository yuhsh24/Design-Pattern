/*************************************************************************
    > File Name: MobilePhone.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 14时10分44秒
 ************************************************************************/

#include"MobilePhone.h"
#include<string>
#include<iostream>

using namespace std;

MobilePhone::MobilePhone(const string& str):phoneName(str)
{
	;
}

MobilePhone::~MobilePhone()
{
	;
}

void MobilePhone::ShowDecorate()
{
	cout<<phoneName<<"的装饰"<<endl;
}

string MobilePhone::GetPhoneName()
{
	return phoneName;
}
