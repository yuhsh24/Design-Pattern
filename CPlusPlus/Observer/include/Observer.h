/*************************************************************************
    > File Name: Observer.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 21时39分07秒
 ************************************************************************/

#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Observer
{
public:
	virtual ~Observer();
	virtual void Update()=0;
};
#endif
