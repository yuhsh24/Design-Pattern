/*************************************************************************
    > File Name: Subtraction.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月19日 星期日 11时53分32秒
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
