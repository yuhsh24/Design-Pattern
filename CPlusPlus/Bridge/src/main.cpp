/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 15时08分57秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"Iphone.h"
#include"Samsung.h"
#include"Communication.h"
#include"Game.h"

using namespace std;

int main()
{
	shared_ptr<MobilePhone> phone1 = make_shared<Iphone>();
	shared_ptr<MobilePhone> phone2 = make_shared<Samsung>();
	shared_ptr<Software> soft1 = make_shared<Communication>();
	shared_ptr<Software> soft2 = make_shared<Game>();
	phone1->RunSoftware(soft1.get());
	phone1->RunSoftware(soft2.get());
	phone2->RunSoftware(soft1.get());
	phone2->RunSoftware(soft2.get());
	return 0;
}
