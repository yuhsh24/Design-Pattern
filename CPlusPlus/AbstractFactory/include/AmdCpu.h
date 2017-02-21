/*************************************************************************
    > File Name: AmdCpu.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时01分36秒
 ************************************************************************/

#ifndef _AMDCPU_H_
#define _AMDCPU_H_

#include"Cpu.h"

class AmdCpu:public Cpu
{
public:
	virtual ~AmdCpu();
	virtual void ShowCpuInformation();
};
#endif
