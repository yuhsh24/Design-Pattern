/*************************************************************************
    > File Name: Blog.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 21时44分08秒
 ************************************************************************/

#ifndef _BLOG_H_
#define _BLOG_H_

#include<memory>
#include<string>
#include"Observer.h"
#include<list>

class Blog
{
public:
	virtual ~Blog();
	void Attach(std::shared_ptr<Observer> tempObserver);
	void Detach(std::shared_ptr<Observer> tempObserver);
	void Notify();
	virtual void SetStatus(const std::string& str);
	std::string GetStatus();
protected:
	std::string status;
private:
	std::list<std::shared_ptr<Observer> > observerList;
};
#endif
