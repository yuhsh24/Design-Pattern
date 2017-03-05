/*************************************************************************
    > File Name: ConcreteCompany.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月03日 星期五 21时39分25秒
 ************************************************************************/

#ifndef _CONCRETECOMPANY_H_
#define _CONCRETECOMPANY_H_

#include<string>
#include<memory>
#include<list>
#include"Company.h"

class ConcreteCompany:public Company
{
public:
	ConcreteCompany(const std::string& str);
	~ConcreteCompany();
	void Add(const std::shared_ptr<Company> company);
	void Remove(const std::shared_ptr<Company> company);
	void Display(int depth) const;
	void LineOfDuty() const;
private:
	std::list<std::shared_ptr<Company> > listCompany;
};
#endif
