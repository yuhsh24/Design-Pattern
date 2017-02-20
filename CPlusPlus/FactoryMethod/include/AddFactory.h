/*************************************************************************
    > File Name: AddFactory.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时08分15秒
 ************************************************************************/

#ifndef _ADDFACTORY_H_
#define _ADDFACTORY_H_

#include"OperationFactory.h"

class AddFactory:public OperationFactory
{
public:
	Operation* CreateInstance();
};
#endif
