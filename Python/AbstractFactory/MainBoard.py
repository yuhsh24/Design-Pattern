# -*- coding:utf-8 -*-

class MainBoard:

    def ShowMainBoard(self):
        pass

class IntelMainBoard(MainBoard):

    def ShowMainBoard(self):
        print "This is an IntelMainBoard."

class AmdMainBoard(MainBoard):

    def ShowMainBoard(self):
        print "This is an AmdMainBoard."
