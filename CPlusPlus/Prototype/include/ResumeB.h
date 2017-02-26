/*************************************************************************
    > File Name: ResumeB.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月25日 星期六 20时39分16秒
 ************************************************************************/

#ifndef _RESUMEB_H_
#define _RESUMEB_H_

#include"Resume.h"

class ResumeB:public Resume
{
public:
	ResumeB(const char* str);
	ResumeB(const ResumeB& resume);
	virtual ~ResumeB();
	virtual ResumeB* Clone();
};
#endif
