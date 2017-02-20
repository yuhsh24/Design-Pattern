/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月19日 星期日 13时09分57秒
 ************************************************************************/

#include<iostream>
#include"OperationFactory.h"
#include"Operation.h"
using namespace std;

int main()
{
	double value1=8;
	double value2=2;
	Operation *addOperator=OperationFactory::CreateOperation('+');
	Operation *subOperator=OperationFactory::CreateOperation('-');
	Operation *mulOperator=OperationFactory::CreateOperation('*');
	Operation *divOperator=OperationFactory::CreateOperation('/');
	cout<<"Add Operation: "<<value1<<" "<<value2<<" "<<addOperator->GetResult(value1,value2)<<endl;
	cout<<"Subtraction Operation: "<<value1<<" "<<value2<<" "<<subOperator->GetResult(value1,value2)<<endl;
	cout<<"Multiply Operation: "<<value1<<" "<<value2<<" "<<mulOperator->GetResult(value1,value2)<<endl;
	cout<<"Division Operation: "<<value1<<" "<<value2<<" "<<divOperator->GetResult(value1,value2)<<endl;
	delete addOperator;
	delete subOperator;
	delete mulOperator;
	delete divOperator;
	return 0;
}
