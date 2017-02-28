/*************************************************************************
    > File Name: ChineseCenter.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月28日 星期二 14时36分04秒
 ************************************************************************/

#include"ChineseCenter.h"
#include<iostream>
#include<string>

using namespace std;

ChineseCenter::ChineseCenter(const string& str):name(str)
{
	;
}

void ChineseCenter::ChineseAttack()
{
	cout<<"中锋进攻"<<endl;
}

void ChineseCenter::ChineseDefence()
{
	cout<<"中锋防守"<<endl;
}
