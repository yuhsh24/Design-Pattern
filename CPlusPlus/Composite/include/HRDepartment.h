/*************************************************************************
    > File Name: HRDepartment.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月04日 星期六 14时39分40秒
 ************************************************************************/

#ifndef _HRDEPARTMENT_H_
#define _HRDEPARTMENT_H_

#include<string>
#include<memory>
#include"Company.h"

class HRDepartment:public Company
{
public:
	HRDepartment(const std::string& str);
	~HRDepartment();
	void Add(const std::shared_ptr<Company> company);
	void Remove(const std::shared_ptr<Company> company);
	void Display(int depth) const;
	void LineOfDuty() const;
};
#endif
