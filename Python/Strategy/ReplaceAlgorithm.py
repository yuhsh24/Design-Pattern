# -*- coding:utf-8 -*-

class ReplaceAlgorithm:

    def Replace(self):
        pass

class LRUReplaceAlgorithm(ReplaceAlgorithm):

    def Replace(self):
        print "Run LRU Algorithm to replace Cache."

class FIFOReplaceAlgorithm(ReplaceAlgorithm):

    def Replace(self):
        print "Run FIFO Algorithm to replace Cache."

class RANDOMReplaceAlgorithm(ReplaceAlgorithm):

    def Replace(self):
        print "Run RANDOM Algorithm to replace Cache."

