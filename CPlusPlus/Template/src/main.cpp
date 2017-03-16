/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月16日 星期四 10时24分36秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"HTTPFileOperation.h"
#include"SOAPFileOperation.h"

using namespace std;

int main()
{
	shared_ptr<FileOperation> httpFile = make_shared<HTTPFileOperation> ();
	shared_ptr<FileOperation> soapFile = make_shared<SOAPFileOperation> ();
	httpFile->DownloadFile();
	soapFile->DownloadFile();
	return 0;
}
