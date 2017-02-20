# -*- coding:utf-8 -*-
from Operation import *

class OperationFactory():

    def CreateInstance(self):
        pass

class AddFactory(OperationFactory):

    def CreateInstance(self):
        return Add()

class SubtractionFactory(OperationFactory):

    def CreateInstance(self):
        return Subtraction()

class MultiplyFactory(OperationFactory):

    def CreateInstance(self):
        return Multiply()

class DivisionFactory(OperationFactory):

    def CreateInstance(self):
        return Division()


if "__main__" == __name__:
    
    addFac = AddFactory()
    addOp = addFac.CreateInstance()
    subFac = SubtractionFactory()
    subOp = subFac.CreateInstance()
    mulFac = MultiplyFactory()
    mulOp = mulFac.CreateInstance()
    divFac = DivisionFactory()
    divOp = divFac.CreateInstance()
    value1 = 10.
    value2 = 2.
    print "Add Operation: value1: %f value2: %f ans: %f" %(value1, value2, addOp.GetResult(value1, value2))
    print "Subtraction Operation: value1: %f value2: %f ans: %f" %(value1, value2, subOp.GetResult(value1, value2))
    print "Multiply Operation: value1: %f value2: %f ans: %f" %(value1, value2, mulOp.GetResult(value1, value2))
    print "Division Operation: value1: %f value2: %f ans: %f" %(value1, value2, divOp.GetResult(value1, value2))
