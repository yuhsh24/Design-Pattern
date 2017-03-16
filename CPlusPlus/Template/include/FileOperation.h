/*************************************************************************
    > File Name: FileOperation.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月16日 星期四 10时10分48秒
 ************************************************************************/

#ifndef _FILEOPERATION_H_
#define _FILEOPERATION_H_

class FileOperation
{
public:
	virtual ~FileOperation();
	void DownloadFile();
protected:
	virtual void DoBeginDownload()=0;
	virtual void DoDownload()=0;
	virtual void DoEndDownload()=0;
};
#endif

