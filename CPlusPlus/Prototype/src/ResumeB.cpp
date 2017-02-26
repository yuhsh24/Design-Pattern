/*************************************************************************
    > File Name: ResumeB.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月26日 星期日 11时30分08秒
 ************************************************************************/

#include"ResumeB.h"

ResumeB::ResumeB(const char* str):Resume(str)
{
	;
}

ResumeB::ResumeB(const ResumeB& resume):Resume(resume)
{
	;
}

ResumeB::~ResumeB()
{
	;
}

ResumeB* ResumeB::Clone()
{
	return new ResumeB(*this);
}
