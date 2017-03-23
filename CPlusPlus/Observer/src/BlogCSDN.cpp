/*************************************************************************
    > File Name: BlogCSDN.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 22时16分02秒
 ************************************************************************/

#include"BlogCSDN.h"

using namespace std;

BlogCSDN::BlogCSDN(const string& name):blogName(name)
{
	;
}

BlogCSDN::~BlogCSDN()
{
	;
}

void BlogCSDN::SetStatus(const string& str)
{
	status=blogName+" "+str;
}
