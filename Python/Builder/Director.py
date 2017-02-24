# -*- coding:utf-8 -*-

from Builder import Builder, FatManBuilder, ThinManBuilder

class Director:

    def Construct(self, builder):
        builder.BuildHead()
        builder.BuildBody()
        builder.BuildHand()
        builder.BuildFeet()

