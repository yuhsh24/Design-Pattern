/*************************************************************************
    > File Name: ThinManBuilder.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 14时12分34秒
 ************************************************************************/

#include"ThinManBuilder.h"

ThinManBuilder::~ThinManBuilder()
{
	;
}

void ThinManBuilder::BuildHead()
{
	product.AddPart("ThinHead");
}

void ThinManBuilder::BuildBody()
{
	product.AddPart("ThinBody");
}

void ThinManBuilder::BuildHand()
{
	product.AddPart("ThinHand");
}

void ThinManBuilder::BuildFeet()
{
	product.AddPart("ThinFeet");
}
