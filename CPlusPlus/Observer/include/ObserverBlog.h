/*************************************************************************
    > File Name: ObserverBlog.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 21时40分57秒
 ************************************************************************/

#ifndef _OBSERVERBLOG_H_
#define _OBSERVERBLOG_H_

#include"Observer.h"
#include<memory>
#include"Blog.h"
#include<string>

class ObserverBlog:public Observer
{
public:
	ObserverBlog(const std::string name, std::shared_ptr<Blog> tempBlog);
	~ObserverBlog();
	void Update();
private:
	std::shared_ptr<Blog> observerBlog;
	std::string observerName;
};
#endif
