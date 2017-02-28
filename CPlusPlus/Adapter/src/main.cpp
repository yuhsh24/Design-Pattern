/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月28日 星期二 14时44分41秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"CenterTranslator.h"
#include"Center.h"

using namespace std;

int main()
{
	shared_ptr<Center> center1 = make_shared<Center>("ShaQ");
	shared_ptr<Center> center2 = make_shared<CenterTranslator>("姚明");
	center1->Attack();
	center1->Defence();
	center2->Attack();
	center2->Defence();
	return 0;
}
