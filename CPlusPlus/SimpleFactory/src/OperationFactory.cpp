/*************************************************************************
    > File Name: OperationFactory.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月19日 星期日 13时06分21秒
 ************************************************************************/

#include"OperationFactory.h"
#include<iostream>
using namespace std;

Operation* OperationFactory::CreateOperation(char operationType)
{
	Operation* op=NULL;
	switch(operationType)
	{
		case '+':
			op=new Add();
			break;
		case '-':
			op=new Subtraction();
			break;
		case '*':
			op=new Multiply();
			break;
		case '/':
			op=new Division();
			break;
		default:
			break;
	}
	return op;
}
