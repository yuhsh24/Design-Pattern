/*************************************************************************
    > File Name: SiegeTankState.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月20日 星期一 19时20分07秒
 ************************************************************************/

#ifndef _SIEGETANKSTATE_H_
#define _SIEGETANKSTATE_H_

class SiegeTankState
{
public:
	virtual ~SiegeTankState();
	virtual void Attack()=0;
	virtual void Move(int x, int y)=0;
};
#endif
