/*************************************************************************
    > File Name: Iphone.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 14时47分40秒
 ************************************************************************/

#include"Iphone.h"
#include"Communication.h"
#include"Game.h"

Iphone::~Iphone()
{
	;
}

void Iphone::RunSoftware(Software* soft)
{
	soft->Run("Iphone ");
}
