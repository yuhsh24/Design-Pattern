/*************************************************************************
    > File Name: MobilePhone.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月02日 星期四 14时06分37秒
 ************************************************************************/

#ifndef _MOBILEPHONE_H_
#define _MOBILEPHONE_H_

#include<string>

class MobilePhone
{
public:
	MobilePhone(const std::string& str);
	virtual ~MobilePhone();
	virtual void ShowDecorate();
	std::string GetPhoneName();
private:
	std::string phoneName;
};
#endif
