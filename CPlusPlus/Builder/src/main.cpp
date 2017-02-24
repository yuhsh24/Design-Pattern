/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 14时27分46秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"Product.h"
#include"FatManBuilder.h"
#include"ThinManBuilder.h"
#include"Director.h"
using namespace std;

int main()
{
	shared_ptr<Director> director = make_shared<Director>();
    shared_ptr<Builder> fatBuilder = make_shared<FatManBuilder>();
	shared_ptr<Builder> thinBuilder = make_shared<ThinManBuilder>();
	director->Construct(*fatBuilder);
	director->Construct(*thinBuilder);
	Product fatman = fatBuilder->GetProduct();
	Product thinman = thinBuilder->GetProduct();
	fatman.ShowProduct();
	thinman.ShowProduct();
	return 0;
}

