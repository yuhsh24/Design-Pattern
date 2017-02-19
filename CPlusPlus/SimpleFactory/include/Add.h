/*************************************************************************
    > File Name: Add.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月19日 星期日 11时50分59秒
 ************************************************************************/

#ifndef _ADD_H_
#define _ADD_H_

#include<Operation.h>

class Add:public Operation
{
public:
	double GetResult(double A, double B);
};
#endif
