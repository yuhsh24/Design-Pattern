/*************************************************************************
    > File Name: ConcreteCompany.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月03日 星期五 21时47分35秒
 ************************************************************************/

#include"ConcreteCompany.h"
#include<string>
#include<list>
#include<iostream>

using namespace std;

ConcreteCompany::ConcreteCompany(const string& str):Company(str)
{
	;
}

ConcreteCompany::~ConcreteCompany()
{
	;
}

void ConcreteCompany::Add(const shared_ptr<Company> company)
{
	listCompany.push_back(company);
}

void ConcreteCompany::Remove(const shared_ptr<Company> company)
{
	listCompany.remove(company);
}

void ConcreteCompany::Display(int depth) const
{
	for(int i=0;i<depth;++i)
	{
		cout<<"-";
	}
	cout<<name<<endl;
	for(auto it=listCompany.begin();it!=listCompany.end();++it)
	{
		(*it)->Display(depth+2);
	}
}

void ConcreteCompany::LineOfDuty() const
{
	for(auto it=listCompany.begin();it!=listCompany.end();++it)
	{
		(*it)->LineOfDuty();
	}
}

