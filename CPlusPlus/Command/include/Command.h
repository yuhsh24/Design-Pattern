/*************************************************************************
    > File Name: Command.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 09时31分18秒
 ************************************************************************/

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include<memory>
#include"RoastCook.h"

class Command
{
public:
	Command(const std::shared_ptr<RoastCook>& tempCooker);
	virtual ~Command();
	virtual void Execute()=0;
protected:
	std::shared_ptr<RoastCook> cooker;
};
#endif
