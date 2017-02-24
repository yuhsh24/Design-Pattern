/*************************************************************************
    > File Name: Director.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 14时21分53秒
 ************************************************************************/

#include"Director.h"
#include"FatManBuilder.h"
#include"ThinManBuilder.h"

void Director::Construct(Builder& builder)
{
	builder.BuildHead();
	builder.BuildBody();
	builder.BuildHand();
	builder.BuildFeet();
}
