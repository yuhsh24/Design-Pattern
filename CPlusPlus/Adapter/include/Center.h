/*************************************************************************
    > File Name: Center.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月28日 星期二 14时23分50秒
 ************************************************************************/

#ifndef _CENTER_H_
#define _CENTER_H_

#include<string>

class Center
{
public:
	Center(const std::string& str);
	virtual ~Center();
	virtual void Attack();
	virtual void Defence();
private:
	std::string name;
};
#endif
