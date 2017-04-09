/*************************************************************************
    > File Name: Waiter.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 10时24分11秒
 ************************************************************************/

#ifndef _WAITER_H_
#define _WAITER_H_

#include"Command.h"
#include<memory>
#include<unordered_map>
#include<string>
#include<list>

class Waiter
{
public:
	void SetCommand(const std::string& name, const std::shared_ptr<Command>& command);
	void CancleCommand(const std::string& name, const std::shared_ptr<Command>& command);
	void Notify(const std::string& name);
private:
	std::unordered_map<std::string, std::list<std::shared_ptr<Command>>> mapping;
};
#endif
