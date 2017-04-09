/*************************************************************************
    > File Name: Command.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年04月09日 星期日 09时37分39秒
 ************************************************************************/

#include"Command.h"

Command::Command(const std::shared_ptr<RoastCook>& tempCoooker):cooker(tempCoooker)
{
	;
}

Command::~Command()
{
	;
}
