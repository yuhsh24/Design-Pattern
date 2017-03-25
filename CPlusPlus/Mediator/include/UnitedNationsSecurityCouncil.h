/*************************************************************************
    > File Name: UnitedNationsSecurityCouncil.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月24日 星期五 22时19分25秒
 ************************************************************************/

#ifndef _UNITEDNATIONSSECURITYCOUNCIL_H_
#define _UNITEDNATIONSSECURITYCOUNCIL_H_

#include"UnitedNations.h"
#include<memory>
#include<string>

class UnitedNationsSecurityCouncil:public UnitedNations
{
public:
	UnitedNationsSecurityCouncil();
	~UnitedNationsSecurityCouncil();
	void Declare(const std::shared_ptr<Country>& ptr, const std::string& message);
	void SetCountry1(const std::shared_ptr<Country>& ptr);
	void SetCountry2(const std::shared_ptr<Country>& ptr);
private:
	std::shared_ptr<Country> country1;
	std::shared_ptr<Country> country2;
};
#endif
