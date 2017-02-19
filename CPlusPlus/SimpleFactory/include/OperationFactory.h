/*************************************************************************
    > File Name: OperationFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月19日 星期日 12时56分38秒
 ************************************************************************/

#ifndef _OPERATIONFACTORY_H_
#define _OPERATIONFACTORY_H_

#include<Add.h>
#include<Subtraction.h>
#include<Multiply.h>
#include<Division.h>

class OperationFactory
{
public:
	static Operation* CreateOperation(char opertionType);
};
#endif
