/*************************************************************************
    > File Name: FatManBuilder.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 14时07分00秒
 ************************************************************************/

#ifndef _FATMANBUILDER_H_
#define _FATMANBUILDER_H_

#include"Builder.h"

class FatManBuilder:public Builder
{
public:
	~FatManBuilder();
	void BuildHead();
	void BuildBody();
	void BuildHand();
	void BuildFeet();
};
#endif
