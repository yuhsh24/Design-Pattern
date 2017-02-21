/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时25分56秒
 ************************************************************************/

#include<iostream>
#include"IntelFactory.h"
#include"AmdFactory.h"
#include"IntelCpu.h"
#include"IntelMainBoard.h"
#include"AmdCpu.h"
#include"AmdMainBoard.h"

using namespace std;

int main()
{
	Factory* intelFac = new IntelFactory();
	Factory* amdFac = new AmdFactory();
	Cpu* intelCpu = intelFac->CreateCpu();
	Cpu* amdCpu = amdFac->CreateCpu();
	MainBoard* intelMainBoard = intelFac->CreateMainBoard();
	MainBoard* amdMainBoard = amdFac->CreateMainBoard();
	intelCpu->ShowCpuInformation();
	amdCpu->ShowCpuInformation();
	intelMainBoard->ShowMainBoardInformation();
	amdMainBoard->ShowMainBoardInformation();
	delete amdMainBoard;
	delete amdCpu;
	delete amdFac;
	delete intelMainBoard;
	delete intelCpu;
	delete intelFac;
	return 0;
}

