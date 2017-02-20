/*************************************************************************
    > File Name: MultiplyFactory.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时53分55秒
 ************************************************************************/

#include"MultiplyFactory.h"
#include"Multiply.h"

Operation* MultiplyFactory::CreateInstance()
{
	return new Multiply();
}
