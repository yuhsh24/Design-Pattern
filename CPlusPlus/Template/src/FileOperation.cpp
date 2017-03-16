/*************************************************************************
    > File Name: FileOperation.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月16日 星期四 10时17分59秒
 ************************************************************************/

#include"FileOperation.h"

FileOperation::~FileOperation()
{
	;
}

void FileOperation::DownloadFile()
{
	DoBeginDownload();
	DoDownload();
	DoEndDownload();
}
