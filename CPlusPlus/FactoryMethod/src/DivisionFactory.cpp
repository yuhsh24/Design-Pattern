/*************************************************************************
    > File Name: DivisionFactory.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时57分09秒
 ************************************************************************/

#include"DivisionFactory.h"
#include"Division.h"

Operation* DivisionFactory::CreateInstance()
{
	return new Division();
}
