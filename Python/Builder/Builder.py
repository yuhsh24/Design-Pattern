# -*- coding:utf-8 -*-

from Product import Product

class Builder:

    def __init__(self):
        self._product = Product()

    def BuildHead(self):
        pass

    def BuildBody(self):
        pass

    def BuildHand(self):
        pass
    
    def BuildFeet(self):
        pass

    def GetProduct(self):
        return self._product

class FatManBuilder(Builder):

    def __init__(self):
        Builder.__init__(self)

    def BuildHead(self):
        self._product.AddPart("FatManHead")

    def BuildBody(self):
        self._product.AddPart("FatManBody")

    def BuildHand(self):
        self._product.AddPart("FatManHand")

    def BuildFeet(self):
        self._product.AddPart("FatManFeet")

class ThinManBuilder(Builder):

    def __init__(self):
        Builder.__init__(self)

    def BuildHead(self):
        self._product.AddPart("ThinManHead")

    def BuildBody(self):
        self._product.AddPart("ThinManBody")

    def BuildHand(self):
        self._product.AddPart("ThinManHand")

    def BuildFeet(self):
        self._product.AddPart("ThinManFeet")
