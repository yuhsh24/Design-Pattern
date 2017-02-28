/*************************************************************************
    > File Name: ChineseCenter.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月28日 星期二 14时33分15秒
 ************************************************************************/

#ifndef _CHINESECENTER_H_
#define _CHINESECENTER_H_

#include<string>

class ChineseCenter
{
public:
	ChineseCenter(const std::string& str);
	void ChineseAttack();
	void ChineseDefence();
private:
	std::string name;
};
#endif
