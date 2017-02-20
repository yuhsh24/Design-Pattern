# -*- coding:utf-8 -*-

class Operation():

    def GetResult(self, A, B):
        pass

class Add(Operation):

    def GetResult(self, A, B):
        return A + B

class Subtraction(Operation):

    def GetResult(self, A, B):
        return A - B 

class Multiply(Operation):

    def GetResult(self, A, B):
        return A * B

class Division(Operation):

    def GetResult(self, A, B):
        return A / B
