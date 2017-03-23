# -*- coding:utf-8 -*-

from Blog import *

class Observer:

    def Update(self):
        pass

class ObserverBlog(Observer):

    def __init__(self, name, blog):
        self.__observerName = name
        self.__blog = blog

    def Update(self):
        str = self.__observerName + " " + self.__blog.GetStatus()
        print str

