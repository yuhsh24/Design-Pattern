/*************************************************************************
    > File Name: HTTPFileOperation.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月16日 星期四 10时20分03秒
 ************************************************************************/

#include<iostream>
#include"HTTPFileOperation.h"

using namespace std;

void HTTPFileOperation::DoBeginDownload()
{
	cout<<"基于HTTP协议开始下载文件"<<endl;
}

void HTTPFileOperation::DoDownload()
{
	cout<<"基于HTTP协议下载文件中..."<<endl;
}

void HTTPFileOperation::DoEndDownload()
{
	cout<<"基于HTTP协议下载文件完成"<<endl;
}
