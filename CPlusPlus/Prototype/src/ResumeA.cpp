/*************************************************************************
    > File Name: ResumeA.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月26日 星期日 11时18分19秒
 ************************************************************************/

#include"ResumeA.h"

ResumeA::ResumeA(const char* str):Resume(str)
{
	;
}

ResumeA::ResumeA(const ResumeA& resume):Resume(resume)
{
	;
}

ResumeA::~ResumeA()
{
	;
}

ResumeA* ResumeA::Clone()
{
	return new ResumeA(*this);
}
