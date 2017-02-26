/*************************************************************************
    > File Name: Resume.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月25日 星期六 20时38分50秒
 ************************************************************************/

#ifndef _RESUME_H_
#define _RESUME_H_

class Resume
{
public:
	Resume(const char* str);
	Resume(const Resume& resume);
	virtual ~Resume();
	virtual Resume* Clone()=0;
	void Show();
	void SetName(const char* str);
protected:
	char *name;
};
#endif
