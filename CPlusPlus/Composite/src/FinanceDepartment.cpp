/*************************************************************************
    > File Name: FinanceDepartment.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月04日 星期六 15时41分23秒
 ************************************************************************/

#include"FinanceDepartment.h"
#include<iostream>
#include<string>
#include<memory>

using namespace std;

FinanceDepartment::FinanceDepartment(const string& str):Company(str)
{
	;
}

FinanceDepartment::~FinanceDepartment()
{
	;
}

void FinanceDepartment::Add(const shared_ptr<Company> company)
{
	cout<<"FinanceDepartment do not add any company!!!"<<endl;
}

void FinanceDepartment::Remove(const shared_ptr<Company> company)
{
	cout<<"FinanceDepartment do not remove any company!!!"<<endl;
}

void FinanceDepartment::Display(int depth) const
{
	for(int i=0;i<depth;++i)
	{
		cout<<"-";
	}
	cout<<name<<endl;
}

void FinanceDepartment::LineOfDuty() const
{
	cout<<name<<" "<<"公司财务管理"<<endl;
}
