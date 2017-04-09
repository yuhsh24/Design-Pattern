# -*- coding:utf-8 -*-

from RoastCook import RoastCook

class Command:

    def __init__(self, cooker):
        self._cooker = cooker

    def Execute(self):
        pass

class MakeMuttonCommand(Command):

    def __init__(self, cooker):
        Command.__init__(self, cooker)

    def Execute(self):
        self._cooker.MakeMutton()

class MakeChickenWingCommand(Command):

    def __init__(self, cooker):
        Command.__init__(self, cooker)

    def Execute(self):
        self._cooker.MakeChickenWing()
