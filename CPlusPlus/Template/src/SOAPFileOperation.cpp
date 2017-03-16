/*************************************************************************
    > File Name: SOAPFileOperation.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月16日 星期四 10时22分23秒
 ************************************************************************/

#include<iostream>
#include"SOAPFileOperation.h"

using namespace std;

void SOAPFileOperation::DoBeginDownload()
{
	cout<<"基于SOAP协议开始下载文件"<<endl;
}

void SOAPFileOperation::DoDownload()
{
	cout<<"基于SOAP协议下载文件中..."<<endl;
}

void SOAPFileOperation::DoEndDownload()
{
	cout<<"基于SOAP协议下载文件完成"<<endl;
}
