/*************************************************************************
    > File Name: HRDepartment.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月04日 星期六 15时35分36秒
 ************************************************************************/

#include"HRDepartment.h"
#include<iostream>
#include<string>

using namespace std;

HRDepartment::HRDepartment(const string& str):Company(str)
{
	;
}

HRDepartment::~HRDepartment()
{
	;
}

void HRDepartment::Add(const shared_ptr<Company> company)
{
	cout<<"HRDepartment do not add any company!!!"<<endl;
}

void HRDepartment::Remove(const shared_ptr<Company> company)
{
	cout<<"HRDepartment do not remove any company!!!"<<endl;
}

void HRDepartment::Display(int depth) const
{
	for(int i=0;i<depth;++i)
	{
		cout<<"-";
	}
	cout<<name<<endl;
}

void HRDepartment::LineOfDuty() const
{
	cout<<name<<" "<<"公司人力资源管理"<<endl;
}
