/*************************************************************************
    > File Name: ThinManBuilder.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 14时12分24秒
 ************************************************************************/

#ifndef _THINMANBUILDER_H_
#define _THINMANBUILDER_H_

#include"Builder.h"

class ThinManBuilder:public Builder
{
public:
	~ThinManBuilder();
	void BuildHead();
	void BuildBody();
	void BuildHand();
	void BuildFeet();
};
#endif
