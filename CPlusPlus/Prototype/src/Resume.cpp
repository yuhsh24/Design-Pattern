/*************************************************************************
    > File Name: Resume.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月26日 星期日 10时32分30秒
 ************************************************************************/

#include"Resume.h"
#include<iostream>
#include<cstring>

using namespace std;

Resume::Resume(const char* str)
{
	int len=strlen(str)+1;
	name=new char[len];
	strcpy(name,str);
}

Resume::Resume(const Resume& resume)
{
	int len=strlen(resume.name);
	name=new char[len];
	strcpy(name,resume.name);
}

Resume::~Resume()
{
	delete name;
}

void Resume::SetName(const char* str)
{
	if(strlen(str)>strlen(name))
	{
		delete name;
		name=new char[strlen(str)+1];
	}
	strcpy(name,str);
}

void Resume::Show()
{
	cout<<"The name of the Resume is: "<<name<<endl;
}
