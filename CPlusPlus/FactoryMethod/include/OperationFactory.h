/*************************************************************************
    > File Name: OperationFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时07分59秒
 ************************************************************************/

#ifndef _OPERATIONFACTORY_H_
#define _OPERATIONFACTORY_H_

#include"Operation.h"

class OperationFactory
{
public:
	virtual Operation* CreateInstance()=0;
};
#endif
