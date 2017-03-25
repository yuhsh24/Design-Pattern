/*************************************************************************
    > File Name: UnitedNations.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月24日 星期五 22时11分44秒
 ************************************************************************/

#ifndef _UNITEDNATIONS_H_
#define _UNITEDNATIONS_H_

#include<string>
#include<memory>

class Country;

class UnitedNations
{
public:
	virtual ~UnitedNations();
	virtual void Declare(const std::shared_ptr<Country>& ptr, const std::string& message)=0;
	virtual	void SetCountry1(const std::shared_ptr<Country>& ptr)=0;
	virtual void SetCountry2(const std::shared_ptr<Country>& ptr)=0;
};
#endif
