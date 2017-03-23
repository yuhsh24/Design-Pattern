/*************************************************************************
    > File Name: ObserverBlog.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 22时03分31秒
 ************************************************************************/

#include"ObserverBlog.h"
#include<iostream>

using namespace std;

ObserverBlog::ObserverBlog(const string name, shared_ptr<Blog> tempBlog):observerName(name),observerBlog(tempBlog)
{
	;
}

ObserverBlog::~ObserverBlog()
{
	;
}

void ObserverBlog::Update()
{
	cout<<observerName<<" "<<observerBlog->GetStatus()<<endl;
}
