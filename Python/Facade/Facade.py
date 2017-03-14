# -*- coding:utf-8 -*-

from Preprocesser import *
from Compiler import *
from Linker import *

class Facade:

    def Build(self):
        Preprocesser.Preprocess()
        Compiler.Compile()
        Linker.Link()

if "__main__" == __name__:
    facader = Facade()
    facader.Build()
        
