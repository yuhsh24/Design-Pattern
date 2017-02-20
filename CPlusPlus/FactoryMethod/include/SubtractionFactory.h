/*************************************************************************
    > File Name: SubtractionFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时08分34秒
 ************************************************************************/

#ifndef _SUBTRACTIONFACTORY_H_
#define _SUBTRACTIONFACTORY_H_

#include"OperationFactory.h"

class SubtractionFactory:public OperationFactory
{
public:
	Operation* CreateInstance();
};
#endif
