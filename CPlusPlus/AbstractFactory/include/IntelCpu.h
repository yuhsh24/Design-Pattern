/*************************************************************************
    > File Name: IntelCpu.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 13时57分27秒
 ************************************************************************/

#ifndef _INTELCPU_H_
#define _INTELCPU_H_

#include"Cpu.h"

class IntelCpu:public Cpu
{
public:
	virtual ~IntelCpu();
	virtual void ShowCpuInformation();
};
#endif
