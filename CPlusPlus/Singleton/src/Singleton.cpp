/*************************************************************************
    > File Name: Singleton.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月22日 星期三 20时50分22秒
 ************************************************************************/

#include<iostream>
#include"Singleton.h"

using namespace std;

Singleton* Singleton::instance = NULL;
pthread_mutex_t Singleton::mutex;
Singleton::Gabor Singleton::gabor;

Singleton::Singleton()
{
	;
}

Singleton* Singleton::GetInstance()
{
	if(instance == NULL)
	{
		pthread_mutex_lock(&mutex);
		if(instance == NULL)
		{
			instance = new Singleton();
		}
		pthread_mutex_unlock(&mutex);
	}
	return instance;
}


Singleton::Gabor::~Gabor()
{
	delete Singleton::instance;
}
