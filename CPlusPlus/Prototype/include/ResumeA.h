/*************************************************************************
    > File Name: ResumeA.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月25日 星期六 20时39分06秒
 ************************************************************************/

#ifndef _RESUMEA_H_
#define _RESUMEA_H_

#include"Resume.h"

class ResumeA:public Resume
{
public:
	ResumeA(const char* str);
	ResumeA(const ResumeA& resume);
	virtual ~ResumeA();
	virtual ResumeA* Clone(); 
};
#endif
