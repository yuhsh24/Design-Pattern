/*************************************************************************
    > File Name: MakeMuttonCommand.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 09时40分09秒
 ************************************************************************/

#ifndef _MAKEMUTTONCOMMAND_H_
#define _MAKEMUTTONCOMMAND_H_

#include"Command.h"

class MakeMuttonCommand:public Command
{
public:
	MakeMuttonCommand(const std::shared_ptr<RoastCook>& tempCooker);
	~MakeMuttonCommand();
	virtual void Execute();
};
#endif
