/*************************************************************************
    > File Name: Builder.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 13时57分08秒
 ************************************************************************/

#ifndef _BUILDER_H_
#define _BUILDER_H_

#include"Product.h"

class Builder
{
public:
	virtual ~Builder();
	virtual void BuildHead()=0;
	virtual void BuildBody()=0;
	virtual void BuildHand()=0;
	virtual void BuildFeet()=0;
	Product GetProduct();
protected:
	Product product;
};
#endif
