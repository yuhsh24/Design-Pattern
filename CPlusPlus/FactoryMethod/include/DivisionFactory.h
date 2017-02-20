/*************************************************************************
    > File Name: DivisionFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时08分58秒
 ************************************************************************/

#ifndef _DIVISIONFACTORY_H_
#define _DIVISIONFACTORY_H_

#include"OperationFactory.h"

class DivisionFactory:public OperationFactory
{
public:
	Operation* CreateInstance();
};
#endif
