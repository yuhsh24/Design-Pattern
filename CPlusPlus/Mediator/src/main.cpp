/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月25日 星期六 10时38分06秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"Country.h"
#include"UnitedNationsSecurityCouncil.h"

using namespace std;

int main()
{
	shared_ptr<UnitedNations> council = make_shared<UnitedNationsSecurityCouncil> ();
	shared_ptr<Country> USA = make_shared<Country>("美国", council);
	shared_ptr<Country> Iraq = make_shared<Country>("伊拉克", council);
	council->SetCountry1(USA);
	council->SetCountry2(Iraq);
	USA->Declare(USA, "制裁伊拉克");
	Iraq->Declare(Iraq, "我接受制裁");
	return 0;
}
