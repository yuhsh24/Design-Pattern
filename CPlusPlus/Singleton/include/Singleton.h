/*************************************************************************
    > File Name: Singleton.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月22日 星期三 20时42分55秒
 ************************************************************************/

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include<pthread.h>

class Singleton
{
public:
	static Singleton* GetInstance();
private:
	Singleton();
	static Singleton* instance;
	static pthread_mutex_t mutex;

	class Gabor
	{
	public:
		~Gabor();
	};
	static Gabor gabor;
};
#endif
