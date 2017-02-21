/*************************************************************************
    > File Name: AmdFactory.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时24分14秒
 ************************************************************************/

#include"AmdFactory.h"
#include"AmdCpu.h"
#include"AmdMainBoard.h"

AmdFactory::~AmdFactory()
{
	;
}

Cpu* AmdFactory::CreateCpu()
{
	return new AmdCpu();
}

MainBoard* AmdFactory::CreateMainBoard()
{
	return new AmdMainBoard();
}
