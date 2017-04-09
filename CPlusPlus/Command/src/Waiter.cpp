/*************************************************************************
    > File Name: Waiter.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 10时32分42秒
 ************************************************************************/

#include"Waiter.h"

using namespace std;

void Waiter::SetCommand(const string& name, const shared_ptr<Command>& command)
{
	mapping[name].push_back(command);
}

void Waiter::CancleCommand(const string& name, const shared_ptr<Command>& command)
{
	if(mapping.find(name)!=mapping.end())
	{
		mapping[name].remove(command);
	}
}

void Waiter::Notify(const string& name)
{
	for(auto it=mapping[name].begin();it!=mapping[name].end();++it)
	{
		(*it)->Execute();
	}
}
