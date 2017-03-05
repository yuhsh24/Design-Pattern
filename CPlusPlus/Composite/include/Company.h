/*************************************************************************
    > File Name: Company.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月03日 星期五 17时18分41秒
 ************************************************************************/

#ifndef _COMPANY_H_
#define _COMPANY_H_

#include<string>
#include<memory>

class Company
{
public:
	Company(const std::string& str);
	virtual ~Company();
	virtual void Add(const std::shared_ptr<Company> company)=0;
	virtual void Remove(const std::shared_ptr<Company> company)=0;
	virtual void Display(int depth) const =0;
	virtual void LineOfDuty() const =0;
protected:
	std::string name;
};
#endif
