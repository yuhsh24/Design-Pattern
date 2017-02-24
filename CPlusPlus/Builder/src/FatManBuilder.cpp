/*************************************************************************
    > File Name: FatManBuilder.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 14时09分12秒
 ************************************************************************/

#include"FatManBuilder.h"

FatManBuilder::~FatManBuilder()
{
	;
}

void FatManBuilder::BuildHead()
{
	product.AddPart("FatHead");
}

void FatManBuilder::BuildBody()
{
	product.AddPart("FatBody");
}

void FatManBuilder::BuildHand()
{
	product.AddPart("FatHand");
}

void FatManBuilder::BuildFeet()
{
	product.AddPart("FatFeet");
}
