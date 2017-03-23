# -*- coding:utf-8 -*-

from Observer import *

class Blog:

    def __init__(self):
        self.__observerList = list()
        self._status = None

    def Attach(self, observer):
        self.__observerList.append(observer)

    def Detach(self, observer):
        self.__observerList.remove(observer)

    def Notify(self):
        for observer in self.__observerList:
            observer.Update()

    def SetStatus(self, str):
        self._status = str

    def GetStatus(self):
        return self._status

class BlogCSDN(Blog):

    def __init__(self, name):
        Blog.__init__(self)
        self.__blogName = name

    def SetStatus(self, str):
        self._status = self.__blogName + " " + str

