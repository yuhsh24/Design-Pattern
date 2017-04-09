/*************************************************************************
    > File Name: MakeMuttonCommand.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 09时42分40秒
 ************************************************************************/

#include"MakeMuttonCommand.h"

MakeMuttonCommand::MakeMuttonCommand(const std::shared_ptr<RoastCook>& tempCooker):Command(tempCooker)
{
	;
}

MakeMuttonCommand::~MakeMuttonCommand()
{
	;
}

void MakeMuttonCommand::Execute()
{
	cooker->MakeMutton();
}
