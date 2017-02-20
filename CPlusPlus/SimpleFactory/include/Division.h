/*************************************************************************
    > File Name: Division.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月19日 星期日 12时53分58秒
 ************************************************************************/

#ifndef _DIVISION_H_
#define _DIVISION_H_

#include"Operation.h"

class Division:public Operation
{
public:
	double GetResult(double A, double B);
};
#endif
