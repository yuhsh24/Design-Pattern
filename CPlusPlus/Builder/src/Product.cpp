/*************************************************************************
    > File Name: Product.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 13时54分33秒
 ************************************************************************/

#include"Product.h"
#include<iostream>
using namespace std;

void Product::AddPart(string partName)
{
	parts.push_back(partName);
}

void Product::ShowProduct()
{
	for(int i=0;i<parts.size();++i)
	{
		cout<<parts[i]<<endl;
	}
}
