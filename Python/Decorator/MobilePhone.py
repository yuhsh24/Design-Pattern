# -*- coding:utf-8 -*-

class MobilePhone:

    def __init__(self, str):
        self.phoneName = str

    def ShowDecorate(self):
        print "%s%s"%(self.phoneName,"的装饰")

class Iphone(MobilePhone):

    def __init__(self):
        MobilePhone.__init__(self, "Iphone")

class Samsung(MobilePhone):

    def __init__(self):
        MobilePhone.__init__(self, "Samsung")

