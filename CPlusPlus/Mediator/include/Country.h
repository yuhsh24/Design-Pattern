/*************************************************************************
    > File Name: Country.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月24日 星期五 22时27分43秒
 ************************************************************************/

#ifndef _COUNTRY_H_
#define _COUNTRY_H_

#include"UnitedNations.h"
#include<memory>
#include<string>

class Country
{
public:
	Country(const std::string& name, const std::shared_ptr<UnitedNations>& ptr);
	virtual ~Country();
	void Declare(const std::shared_ptr<Country>& ptr, const std::string& message);
	void GetMessage(const std::string& message);
protected:
	std::string countryName;
	std::shared_ptr<UnitedNations> mediator;
};
#endif
