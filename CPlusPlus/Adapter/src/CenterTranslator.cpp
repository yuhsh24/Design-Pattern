/*************************************************************************
    > File Name: CenterTranslator.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月28日 星期二 14时41分31秒
 ************************************************************************/

#include"CenterTranslator.h"
#include<string>

using namespace std;

CenterTranslator::CenterTranslator(const string& str):Center(str),chiCenter(str)
{
	;
}

void CenterTranslator::Attack()
{
	chiCenter.ChineseAttack();
}

void CenterTranslator::Defence()
{
	chiCenter.ChineseDefence();
}
