# -*- coding:utf-8 -*-

class Software:

    def Run(self, str):
        pass

class Communication(Software):

    def Run(self, str):
        print "%s%s"%(str, "Communication")

class Game(Software):

    def Run(self, str):
        print "%s%s"%(str, "Game")
