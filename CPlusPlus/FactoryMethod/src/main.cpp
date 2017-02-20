/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月20日 星期一 11时32分35秒
 ************************************************************************/

#include<iostream>
#include"AddFactory.h"
#include"SubtractionFactory.h"
#include"MultiplyFactory.h"
#include"DivisionFactory.h"

using namespace std;

int main()
{
	double value1=10;
	double value2=2;
	OperationFactory* addFac=new AddFactory();
	Operation* add=addFac->CreateInstance();
    OperationFactory* subFac=new SubtractionFactory();
	Operation* sub=subFac->CreateInstance();
	OperationFactory* mulFac=new MultiplyFactory();
	Operation* mul=mulFac->CreateInstance();
	OperationFactory* divFac=new DivisionFactory();
	Operation* div=divFac->CreateInstance();
	cout<<"Add Operation: "<<"value1: "<<value1<<" "<<"value2: "<<value2<<" "<<"ans: "<<add->GetResult(value1,value2)<<endl;
	cout<<"Subtraction Operation: "<<"value1: "<<value1<<" "<<"value2: "<<value2<<" "<<"ans: "<<sub->GetResult(value1,value2)<<endl;
	cout<<"Multiply Operation: "<<"value1: "<<value1<<" "<<"value2: "<<value2<<" "<<"ans: "<<mul->GetResult(value1,value2)<<endl;
	cout<<"Division Operation: "<<"value1: "<<value1<<" "<<"value2: "<<value2<<" "<<"ans: "<<div->GetResult(value1,value2)<<endl;
	delete add;
	delete addFac;
	delete sub;
	delete subFac;
	delete mul;
	delete mulFac;
	delete div;
	delete divFac;
	return 0;
}

