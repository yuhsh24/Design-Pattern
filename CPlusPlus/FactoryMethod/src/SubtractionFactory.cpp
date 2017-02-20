/*************************************************************************
    > File Name: SubtractionFactory.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时52分00秒
 ************************************************************************/

#include"SubtractionFactory.h"
#include"Subtraction.h"

Operation* SubtractionFactory::CreateInstance()
{
	return new Subtraction();
}
