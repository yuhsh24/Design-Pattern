/*************************************************************************
    > File Name: Subtraction.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 10时07分21秒
 ************************************************************************/

#ifndef _SUBTRACTION_H_
#define _SUBTRACTION_H_

#include"Operation.h"

class Subtraction:public Operation
{
public:
	double GetResult(double A, double B);
};
#endif
