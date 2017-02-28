/*************************************************************************
    > File Name: CenterTranslator.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月28日 星期二 14时38分32秒
 ************************************************************************/

#ifndef _CENTERTRANSLATOR_H_
#define _CENTERTRANSLATOR_H_

#include"ChineseCenter.h"
#include"Center.h"
#include<string>

class CenterTranslator:public Center
{
public:
	CenterTranslator(const std::string& str);
	virtual void Attack();
	virtual void Defence();
private:
	ChineseCenter chiCenter;
};
#endif
