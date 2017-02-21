/*************************************************************************
    > File Name: IntelFactory.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时20分17秒
 ************************************************************************/

#include"IntelFactory.h"
#include"IntelCpu.h"
#include"IntelMainBoard.h"

IntelFactory::~IntelFactory()
{
	;
}

Cpu* IntelFactory::CreateCpu()
{
	return new IntelCpu();
}

MainBoard* IntelFactory::CreateMainBoard()
{
	return new IntelMainBoard();
}
