/*************************************************************************
    > File Name: Samsung.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 14时55分34秒
 ************************************************************************/

#include"Samsung.h"
#include"Communication.h"
#include"Game.h"

Samsung::~Samsung()
{
	;
}

void Samsung::RunSoftware(Software* soft)
{
	soft->Run("Samsung ");
}
