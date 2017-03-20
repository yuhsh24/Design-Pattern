# -*- coding:utf-8 -*-

class SiegeTankState:

    def Attack(self):
        pass

    def Move(self, x, y):
        pass

class SiegeState(SiegeTankState):

    def Attack(self):
        print "Attack for 40"

    def Move(self, x, y):
        print "Can not move in siege state." 

class TankState(SiegeTankState):

    def Attack(self):
        print "Attack for 20"

    def Move(self, x, y):
        print "%s%d%s%d%s"%("Move to (", x, ",", y, ")")
