/*************************************************************************
    > File Name: MakeChickenWingCommand.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 09时44分46秒
 ************************************************************************/

#ifndef _MAKECHICKENWING_H_
#define _MAKECHICKENWING_H_

#include"Command.h"

class MakeChickenWingCommand:public Command
{
public:
	MakeChickenWingCommand(const std::shared_ptr<RoastCook>& tempCooker);
	~MakeChickenWingCommand();
	virtual void Execute();
};
#endif
