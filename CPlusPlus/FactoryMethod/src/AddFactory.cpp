/*************************************************************************
    > File Name: AddFactory.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时49分50秒
 ************************************************************************/

#include"AddFactory.h"
#include"Add.h"

Operation* AddFactory::CreateInstance()
{
	return new Add();
}
