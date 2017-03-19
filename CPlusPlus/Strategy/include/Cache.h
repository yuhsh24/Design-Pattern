/*************************************************************************
    > File Name: Cache.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月19日 星期日 15时42分05秒
 ************************************************************************/

#ifndef _CACHE_H_
#define _CACHE_H_

#include"ReplaceAlgorithm.h"
#include<memory>

class Cache
{
public:
	Cache();
	~Cache();
	void Replace();
	void SetReplaceAlgorithm(std::shared_ptr<ReplaceAlgorithm> ptr);
private:
	std::shared_ptr<ReplaceAlgorithm> replacePtr;
};
#endif
