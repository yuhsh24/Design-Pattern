# -*- coding:utf-8 -*-

class Memento:

    def __init__(self, vit, att, defe):
        self.__vitality = vit
        self.__attack = att
        self.__defence = defe

    def GetVitality(self):
        return self.__vitality
    
    def GetAttack(self):
        return self.__attack

    def GetDefence(self):
        return self.__defence
