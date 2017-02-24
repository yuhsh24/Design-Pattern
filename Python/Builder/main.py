# -*- coding:utf-8 -*-

from Builder import FatManBuilder, ThinManBuilder
from Director import Director
from Product import Product

if "__main__" == __name__:
    director = Director()
    fatmanBuilder = FatManBuilder()
    thinmanBuilder = ThinManBuilder()
    director.Construct(fatmanBuilder)
    director.Construct(thinmanBuilder)
    fatman = fatmanBuilder.GetProduct()
    fatman.ShowProduct()
    thinman = thinmanBuilder.GetProduct()
    thinman.ShowProduct()
