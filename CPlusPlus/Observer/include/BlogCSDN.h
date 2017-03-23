/*************************************************************************
    > File Name: BlogCSDN.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 21时54分29秒
 ************************************************************************/

#ifndef _BLOGCSDN_H_
#define _BLOGCSDN_H_

#include"Blog.h"
#include<string>

class BlogCSDN:public Blog
{
public:
	BlogCSDN(const std::string& name);
	~BlogCSDN();
	void SetStatus(const std::string& str);
private:
	std::string blogName;
};
#endif
