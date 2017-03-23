/*************************************************************************
    > File Name: Blog.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 22时07分21秒
 ************************************************************************/

#include"Blog.h"
#include"ObserverBlog.h"

using namespace std;

Blog::~Blog()
{
	;
}

void Blog::Attach(shared_ptr<Observer> tempObserver)
{
	observerList.push_back(tempObserver);
}

void Blog::Detach(shared_ptr<Observer> tempObserver)
{
	observerList.remove(tempObserver);
}

void Blog::Notify()
{
	for(auto it=observerList.begin();it!=observerList.end();++it)
	{
		(*it)->Update();
	}
}

void Blog::SetStatus(const std::string& str)
{
	status=str;
}

string Blog::GetStatus()
{
	return status;
}
