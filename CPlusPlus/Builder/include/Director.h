/*************************************************************************
    > File Name: Director.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 14时18分46秒
 ************************************************************************/

#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

#include"Builder.h"

class Director
{
public:
	void Construct(Builder& builder);
};
#endif
