# -*- coding:utf-8 -*-
from Operation import *

class OperationFactory:

    @staticmethod
    def CreateOperation(operationType):
        if operationType == "+":
            return Add()
        elif operationType == "-":
            return Subtraction()
        elif operationType == "*":
            return Multiply()
        elif operationType == "\\":
            return Division()
        else:
            return None

if "__main__" == __name__:
    AddOp = OperationFactory.CreateOperation("+")
    SubOp = OperationFactory.CreateOperation("-")
    MulOp = OperationFactory.CreateOperation("*")
    DivOp = OperationFactory.CreateOperation("\\")
    value1 = 8.
    value2 = 2.
    print "Add Operation value1: %f value2: %f ans: %f" %(value1,value2,AddOp.GetResult(value1, value2))
    print "Subtraction Operation value1: %f value2: %f ans: %f" %(value1,value2,SubOp.GetResult(value1, value2))
    print "Multiply Operation value1: %f value2: %f ans: %f" %(value1,value2,MulOp.GetResult(value1, value2))
    print "Division Operation value1: %f value2: %f ans: %f" %(value1,value2,DivOp.GetResult(value1, value2))

