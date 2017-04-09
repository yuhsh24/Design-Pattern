/*************************************************************************
    > File Name: MakeChickenWingCommand.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 09时48分47秒
 ************************************************************************/

#ifndef _MAKECHICKENWINGCOMMAND_H_
#define _MAKECHICKENWINGCOMMAND_H_

#include"MakeChickenWingCommand.h"

MakeChickenWingCommand::MakeChickenWingCommand(const std::shared_ptr<RoastCook>& tempCooker):Command(tempCooker)
{
	;
}

MakeChickenWingCommand::~MakeChickenWingCommand()
{
	;
}

void MakeChickenWingCommand::Execute()
{
	cooker->MakeChickenWing();
}
#endif
