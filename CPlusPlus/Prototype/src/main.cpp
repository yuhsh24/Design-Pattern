/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月26日 星期日 11时40分31秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"ResumeA.h"
#include"ResumeB.h"

using namespace std;

int main()
{
	ResumeA aRe("A");
	ResumeB bRe("B");
	shared_ptr<Resume> aReCopy=make_shared<ResumeA>(aRe);
	shared_ptr<Resume> bReCopy=make_shared<ResumeB>(bRe);
	aReCopy->Show();
	bReCopy->Show();
	aReCopy->SetName("AA");
	bReCopy->SetName("BB");
	aRe.Show();
	bRe.Show();
	aReCopy->Show();
	bReCopy->Show();
	return 0;
}
