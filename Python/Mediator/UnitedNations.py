# -*- coding:utf-8 -*-

from Country import *

class UnitedNations:

    def Declare(self, country, message):
        pass
    
    def SetCountry1(self, country):
        pass

    def SetCountry2(self, country):
        pass

class UnitedNationsSecurityCouncil(UnitedNations):

    def __init__(self):
        self.__country1 = None
        self.__country2 = None

    def Declare(self, country, message):
        if self.__country1 == country:
            self.__country2.GetMessage(message)
        else:
            self.__country1.GetMessage(message)

    def SetCountry1(self, country):
        self.__country1 = country

    def SetCountry2(self, country):
        self.__country2 = country
