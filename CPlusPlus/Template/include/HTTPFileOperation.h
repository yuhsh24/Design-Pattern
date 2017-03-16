/*************************************************************************
    > File Name: HTTPFileOperation.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月16日 星期四 10时13分48秒
 ************************************************************************/

#ifndef _HTTPFILEOPERATION_H_
#define _HTTPFILEOPERATION_H_

#include"FileOperation.h"

class HTTPFileOperation:public FileOperation
{
protected:
	virtual void DoBeginDownload();
	virtual void DoDownload();
	virtual void DoEndDownload();
};
#endif
