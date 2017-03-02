# -*- coding:utf-8 -*-
from ChineseCenter import *

class Center:

    def __init__(self, str):
        self.__name = str

    def Attack(self):
        print "Center Attack!"

    def Defence(self):
        print "Center Defence!"

class CenterTranslator(Center):

    def __init__(self, str):
        Center.__init__(self, str)
        self.chiCenter = ChineseCenter(str)

    def Attack(self):
        self.chiCenter.ChineseAttack()
    
    def Defence(self):
        self.chiCenter.ChineseDefence()





