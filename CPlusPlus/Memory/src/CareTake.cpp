/*************************************************************************
    > File Name: CareTake.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月23日 星期四 16时42分49秒
 ************************************************************************/

#include"CareTake.h"

CareTake::CareTake()
{
	;
}

CareTake::~CareTake()
{
	;
}

void CareTake::SaveMemento(const Memento& mem)
{
	memory=mem;
}

Memento CareTake::Load()
{
	return memory;
}
