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
	virtual ~Resume();
	virtual Resume* Clone()=0;
	virtual void Show()=0;
	void SetName(const char*);
protected:
	char *name;
}
#endif
