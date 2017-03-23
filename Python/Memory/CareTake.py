# -*- coding:utf-8 -*-

from Memento import *

class CareTake:

    def SaveMemento(self, mem):
        self.__memory = mem

    def Load(self):
        return self.__memory
