/*************************************************************************
    > File Name: Cache.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月19日 星期日 15时56分06秒
 ************************************************************************/

#include"Cache.h"
#include<iostream>
#include<memory>
#include"LRUReplaceAlgorithm.h"
#include"FIFOReplaceAlgorithm.h"
#include"RANDOMReplaceAlgorithm.h"

using namespace std;

Cache::Cache()
{
	replacePtr = nullptr;
}

Cache::~Cache()
{
	;
}

void Cache::Replace()
{
	if(nullptr == replacePtr)
	{
		cout<<"No Algorithm to replace Cache."<<endl;
	}
	else
	{
		replacePtr->Replace();
	}
}

void Cache::SetReplaceAlgorithm(shared_ptr<ReplaceAlgorithm> ptr)
{
	replacePtr = ptr;
}
