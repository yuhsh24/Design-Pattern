/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 16时24分02秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<string>
#include"Iphone.h"
#include"Samsung.h"
#include"Decorator1.h"
#include"Decorator2.h"

using namespace std;

int main()
{
	shared_ptr<MobilePhone> phone1 = make_shared<Iphone>();
	shared_ptr<Decorator> iphone1Dec = make_shared<Decorator1>(phone1.get());
	shared_ptr<Decorator> iphone2Dec = make_shared<Decorator2>(iphone1Dec.get());
	shared_ptr<MobilePhone> phone2 = make_shared<Samsung>();
	shared_ptr<Decorator> samphone2Dec = make_shared<Decorator2>(phone2.get());
	iphone2Dec->ShowDecorate();
	samphone2Dec->ShowDecorate();
	return 0;
}
