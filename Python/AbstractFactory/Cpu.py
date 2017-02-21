# -*- coding:utf-8 -*-

class Cpu:
    
    def ShowCpuInformation(self):
        pass

class IntelCpu(Cpu):

    def ShowCpuInformation(self):
        print "This is an IntelCpu."

class AmdCpu(Cpu):

    def ShowCpuInformation(self):
        print "This is an AmdCpu."
