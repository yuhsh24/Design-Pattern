# -*- coding:utf-8 -*-

from MobilePhone import *

class Decorator(MobilePhone):

    def __init__(self, phone):
        self.__phone = phone

    def ShowDecorate(self):
        self.__phone.ShowDecorate()

class Decorator1(Decorator):

    def __init__(self, phone):
        Decorator.__init__(self, phone)

    def ShowDecorate(self):
        Decorator.ShowDecorate(self)
        self.__AddDecorate()

    def __AddDecorate(self):
        print "增加Decorator1"

class Decorator2(Decorator):

    def __init__(self, phone):
        Decorator.__init__(self, phone)


    def ShowDecorate(self):
        Decorator.ShowDecorate(self)
        self.__AddDecorate()


    def __AddDecorate(self):
        print "增加Decorator2"
