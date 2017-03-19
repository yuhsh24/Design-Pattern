# -*- coding:utf-8 -*-

from ReplaceAlgorithm import *

class Cache:

    def __init__(self):
        self.__replaceAlg = None

    def Replace(self):
        if(self.__replaceAlg == None):
            print "No Algorithm to replace Cache."
        else:
            self.__replaceAlg.Replace()

    def SetReplaceAlgorithm(self, replaceAlg):
        self.__replaceAlg = replaceAlg

