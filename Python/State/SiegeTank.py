# -*- coding:utf-8 -*-

from SiegeTankState import *

class SiegeTank:

    def __init__(self):
        self.__pSiegeState = SiegeState()
        self.__pTankState = TankState()
        self.__pSiegeTankState = self.__pSiegeState

    def EnterSiegeMode(self):
        self.__pSiegeTankState = self.__pSiegeState

    def EnterTankMode(self):
        self.__pSiegeTankState = self.__pTankState

    def Attack(self):
        self.__pSiegeTankState.Attack()

    def Move(self, x, y):
        self.__pSiegeTankState.Move(x, y)
