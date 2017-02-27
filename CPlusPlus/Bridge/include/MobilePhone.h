/*************************************************************************
    > File Name: MobilePhone.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 14时30分58秒
 ************************************************************************/

#ifndef _MOBILEPHONE_H_
#define _MOBILEPHONE_H_

class Software;
class MobilePhone
{
public:
	virtual ~MobilePhone();
	virtual void RunSoftware(Software* soft)=0;
};
#endif
