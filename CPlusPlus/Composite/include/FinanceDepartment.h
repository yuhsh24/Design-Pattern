/*************************************************************************
    > File Name: FinanceDepartment.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月04日 星期六 14时43分24秒
 ************************************************************************/

#ifndef _FINANCEDEPARTMENT_H_
#define _FINANCEDEPARTMENT_H_

#include<string>
#include<memory>
#include"Company.h"

class FinanceDepartment:public Company
{
public:
	FinanceDepartment(const std::string& str);
	~FinanceDepartment();
	void Add(const std::shared_ptr<Company> company);
	void Remove(const std::shared_ptr<Company> company);
	void Display(int depth) const;
	void LineOfDuty() const;
};
#endif
