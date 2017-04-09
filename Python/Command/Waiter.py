# -*- coding:utf-8 -*-

from Command import MakeMuttonCommand
from Command import MakeChickenWingCommand

class Waiter:

    def __init__(self):
        self.__mapping = dict()

    def SetCommand(self, name, command):
        if name not in self.__mapping.keys():
            self.__mapping[name] = []
        self.__mapping[name].append(command)

    def CancleCommand(self, name, command):
        if name in self.__mapping.keys():
            self.__mapping[name].remove(command)

    def Notify(self, name):
        if name in self.__mapping:
            for cmd in self.__mapping[name]:
                cmd.Execute()

        
