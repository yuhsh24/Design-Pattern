/*************************************************************************
    > File Name: UnitedNationsSecurityCouncil.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月24日 星期五 22时23分44秒
 ************************************************************************/

#include"UnitedNationsSecurityCouncil.h"
#include"Country.h"

using namespace std;

UnitedNationsSecurityCouncil::UnitedNationsSecurityCouncil():country1(nullptr), country2(nullptr)
{
	;
}

UnitedNationsSecurityCouncil::~UnitedNationsSecurityCouncil()
{
	;
}

void UnitedNationsSecurityCouncil::Declare(const shared_ptr<Country>& ptr, const string& message)
{
	if(ptr.get() == country1.get())
	{
		country2->GetMessage(message);
	}
	else
	{
		country1->GetMessage(message);
	}
}

void UnitedNationsSecurityCouncil::SetCountry1(const shared_ptr<Country>& ptr)
{
	country1 = ptr;
}

void UnitedNationsSecurityCouncil::SetCountry2(const shared_ptr<Country>& ptr)
{
	country2 = ptr;
}
