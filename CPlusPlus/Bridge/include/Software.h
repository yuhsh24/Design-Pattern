/*************************************************************************
    > File Name: Software.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 14时57分31秒
 ************************************************************************/

#ifndef _SOFTWARE_H_
#define _SOFTWARE_H_

#include<string>

class Software
{
public:
	virtual ~Software();
	virtual void Run(std::string str)=0;
};
#endif
