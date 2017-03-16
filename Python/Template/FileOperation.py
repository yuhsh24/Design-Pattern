# -*- coding:utf-8 -*-

class FileOperation:

    def DownloadFile(self):
        self._DoBeginDownload()
        self._DoDownload()
        self._DoEndDownload()

    def _DoBeginDownload(self):
        pass

    def _DoDownload(self):
        pass
    
    def _DoEndDownload(self):
        pass

class HTTPFileOperation(FileOperation):

    def _DoBeginDownload(self):
        print "基于HTTP协议开始下载文件"

    def _DoDownload(self):
        print "基于HTTP协议下载文件中..."

    def _DoEndDownload(self):
        print "基于HTTP协议下载文件完成"

class SOAPFileOperation(FileOperation):

    def _DoBeginDownload(self):
        print "基于SOAP协议开始下载文件"

    def _DoDownload(self):
        print "基于SOAP协议下载文件中..."
    
    def _DoEndDownload(self):
        print "基于SOAP协议下载文件完成"

if "__main__" == __name__:
    httpFile = HTTPFileOperation()
    soapFile = SOAPFileOperation()
    httpFile.DownloadFile()
    soapFile.DownloadFile()
