/*************************************************************************
    > File Name: IntelMainBoard.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时07分06秒
 ************************************************************************/

#ifndef _INTELMAINBOARD_H_ 
#define _INTELMAINBOARD_H_

#include"MainBoard.h"

class IntelMainBoard:public MainBoard
{
public:
	virtual ~IntelMainBoard();
	virtual void ShowMainBoardInformation();
};
#endif
