# -*- coding:utf-8 -*-

class Product:

    def __init__(self):
        self.__parts = list()

    def AddPart(self, partName):
        self.__parts.append(partName)

    def ShowProduct(self):
        for part in self.__parts:
            print part

