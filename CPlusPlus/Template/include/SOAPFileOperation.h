/*************************************************************************
    > File Name: SOAPFileOperation.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月16日 星期四 10时16分02秒
 ************************************************************************/

#ifndef _SOAPFILEOPERATION_H_
#define _SOAPFILEOPERATION_H_

#include"FileOperation.h"

class SOAPFileOperation:public FileOperation
{
protected:
	virtual void DoBeginDownload();
	virtual void DoDownload();
	virtual void DoEndDownload();
};
#endif
