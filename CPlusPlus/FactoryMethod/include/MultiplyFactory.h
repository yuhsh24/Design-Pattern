/*************************************************************************
    > File Name: MultiplyFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时08分48秒
 ************************************************************************/

#ifndef _MULTIPLYFACTORY_H_
#define _MULTIPLYFACTORY_H_

#include"OperationFactory.h"

class MultiplyFactory:public OperationFactory
{
public:
	Operation* CreateInstance();
};
#endif
