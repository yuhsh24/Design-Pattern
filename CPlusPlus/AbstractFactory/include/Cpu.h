/*************************************************************************
    > File Name: Cpu.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 13时53分55秒
 ************************************************************************/

#ifndef _CPU_H_
#define _CPU_H_

class Cpu
{
public:
	virtual ~Cpu();
	virtual void ShowCpuInformation()=0;
};
#endif
