/*************************************************************************
    > File Name: Communication.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月27日 星期一 15时01分18秒
 ************************************************************************/

#ifndef _COMMUNICATION_H_
#define _COMMUNICATION_H_

#include"Software.h"

class Communication:public Software
{
public:
	virtual ~Communication();
	virtual void Run(std::string str);
};
#endif
