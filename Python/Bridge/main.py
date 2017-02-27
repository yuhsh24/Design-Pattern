# -*- coding:utf-8 -*-

from MobilePhone import *
from Software import *

if "__main__" == __name__:
    phone1 = Iphone()
    phone2 = Samsung()
    soft1 = Communication()
    soft2 = Game()
    phone1.RunSoftware(soft1)
    phone1.RunSoftware(soft2)
    phone2.RunSoftware(soft1)
    phone2.RunSoftware(soft2)

