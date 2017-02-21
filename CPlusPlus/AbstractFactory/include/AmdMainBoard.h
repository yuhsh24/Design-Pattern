/*************************************************************************
    > File Name: AmdMainBoard.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月21日 星期二 14时11分15秒
 ************************************************************************/

#ifndef _AMDMAINBOARD_H_
#define _AMDMAINBOARD_H_

#include"MainBoard.h"

class AmdMainBoard:public MainBoard
{
public:
	virtual ~AmdMainBoard();
	virtual void ShowMainBoardInformation();
};
#endif
