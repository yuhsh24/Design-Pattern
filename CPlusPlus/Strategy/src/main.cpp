/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月19日 星期日 16时00分49秒
 ************************************************************************/

#include"Cache.h"
#include"LRUReplaceAlgorithm.h"
#include"FIFOReplaceAlgorithm.h"
#include"RANDOMReplaceAlgorithm.h"
#include<iostream>
#include<memory>

using namespace std;

int main()
{
	Cache cache;
	cache.Replace();
	shared_ptr<ReplaceAlgorithm> repPtr = make_shared<LRUReplaceAlgorithm>();
	cache.SetReplaceAlgorithm(repPtr);
	cache.Replace();
	repPtr = make_shared<FIFOReplaceAlgorithm> ();
	cache.SetReplaceAlgorithm(repPtr);
	cache.Replace();
	repPtr = make_shared<RANDOMReplaceAlgorithm> ();
	cache.SetReplaceAlgorithm(repPtr);
	cache.Replace();
	return 0;
}
