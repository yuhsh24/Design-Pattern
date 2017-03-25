# -*- coding:utf-8 -*-

from UnitedNations import *

class Country:

    def __init__(self, name, mediator):
        self.__name = name
        self.__mediator = mediator

    def Declare(self, message):
        self.__mediator.Declare(self, message)

    def GetMessage(self, message):
        print "%s%s%s"%(self.__name, "收到信息：", message)
