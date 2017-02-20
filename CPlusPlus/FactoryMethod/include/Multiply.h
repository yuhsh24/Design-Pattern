/*************************************************************************
    > File Name: Multiply.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时07分32秒
 ************************************************************************/

#ifndef _MULTIPLY_H_
#define _MULTIPLY_H_

#include"Operation.h"

class Multiply:public Operation
{
public:
	double GetResult(double A, double B);
};
#endif
