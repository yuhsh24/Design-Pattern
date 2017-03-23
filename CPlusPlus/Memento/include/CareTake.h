/*************************************************************************
    > File Name: CareTake.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月23日 星期四 16时40分31秒
 ************************************************************************/

#ifndef _CARETAKE_H_
#define _CARETAKE_H_

#include"Memento.h"

class CareTake
{
public:
	CareTake();
	~CareTake();
	void SaveMemento(const Memento& mem);
	Memento Load();
private:
	Memento memory;
};
#endif
