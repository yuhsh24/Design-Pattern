/*************************************************************************
    > File Name: Country.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月24日 星期五 22时36分15秒
 ************************************************************************/

#include"Country.h"
#include<iostream>

using namespace std;

Country::Country(const std::string& name, const std::shared_ptr<UnitedNations>& ptr):countryName(name), mediator(ptr)
{
	;
}

Country::~Country()
{
	;
}

void Country::Declare(const shared_ptr<Country>& ptr, const string& message) 
{
	mediator->Declare(ptr,message);
}

void Country::GetMessage(const string& message)
{
	cout<<countryName<<"收到信息："<<message<<endl;
}
