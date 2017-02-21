# -*- coding:utf-8 -*-

from Cpu import *
from MainBoard import *

class Factory:

    def CreateCpu(self):
        pass

    def CreateMainBoard(self):
        pass

class IntelFactory(Factory):

    def CreateCpu(self):
        return IntelCpu()

    def CreateMainBoard(self):
        return IntelMainBoard()

class AmdFactory(Factory):

    def CreateCpu(self):
        return AmdCpu()

    def CreateMainBoard(self):
        return AmdMainBoard()

if "__main__" == __name__:
    intelFac = IntelFactory()
    amdFac = AmdFactory()
    intelFac.CreateCpu().ShowCpuInformation()
    amdFac.CreateCpu().ShowCpuInformation()
    intelFac.CreateMainBoard().ShowMainBoard()
    amdFac.CreateMainBoard().ShowMainBoard()
