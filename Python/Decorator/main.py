# -*- coding:utf-8 -*-

from MobilePhone import *
from Decorator import *

if "__main__" == __name__:
    iphone = Iphone()
    iphoneDec1 = Decorator1(iphone)
    iphoneDec2 = Decorator2(iphoneDec1)
    iphoneDec2.ShowDecorate()
    samsung = Samsung()
    samphoneDec2 = Decorator2(samsung)
    samphoneDec2.ShowDecorate()
