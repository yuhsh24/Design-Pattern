/*************************************************************************
    > File Name: FIFOReplaceAlgorithm.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月19日 星期日 15时38分52秒
 ************************************************************************/

#ifndef _FIFOREPLACEALGORITHM_H_
#define _FIFOREPLACEALGORITHM_H_

#include"ReplaceAlgorithm.h"

class FIFOReplaceAlgorithm:public ReplaceAlgorithm
{
public:
	~FIFOReplaceAlgorithm();
	virtual void Replace();
};
#endif
