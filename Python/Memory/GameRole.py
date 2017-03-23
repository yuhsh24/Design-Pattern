# -*- coding:utf-8 -*-

from Memento import *

class GameRole:

    def __init__(self):
        self.__vitality = 100
        self.__attack = 100
        self.__defence = 100
    
    def Save(self):
        mem = Memento(self.__vitality, self.__attack, self.__defence)
        return mem
    
    def Load(self, mem):
        self.__vitality = mem.GetVitality()
        self.__attack = mem.GetAttack()
        self.__defence = mem.GetDefence()

    def Show(self):
        print "%s%d%s%s%d%s%s%d"%("vitality:", self.__vitality, " ", "attack:", self.__attack, " ", "defence:", self.__defence)

    def BeingAttacked(self):
        self.__vitality -= 10
        self.__attack -= 10
        self.__defence -= 10
