/*************************************************************************
    > File Name: Decorator.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 14时28分15秒
 ************************************************************************/

#include"Decorator.h"

Decorator::Decorator(MobilePhone* tempPhone):MobilePhone(tempPhone->GetPhoneName()),phone(tempPhone)
{
	;
}

Decorator::~Decorator()
{
	;
}

void Decorator::ShowDecorate()
{
	phone->ShowDecorate();
}
