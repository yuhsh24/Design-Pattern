# -*- coding:utf-8 -*-

from RoastCook import RoastCook
from Command import MakeMuttonCommand
from Command import MakeChickenWingCommand
from Waiter import Waiter

if "__main__" == __name__:
    cooker = RoastCook()
    muttonCommand = MakeMuttonCommand(cooker)
    chickenWingCommand = MakeChickenWingCommand(cooker)
    waiter = Waiter()

    waiter.SetCommand("顾客1", muttonCommand)
    waiter.SetCommand("顾客1", chickenWingCommand)
    print "顾客1："
    waiter.Notify("顾客1")
    waiter.SetCommand("顾客2", chickenWingCommand)
    waiter.SetCommand("顾客2", muttonCommand)
    waiter.CancleCommand("顾客3", chickenWingCommand)
    waiter.CancleCommand("顾客2", chickenWingCommand)
    waiter.Notify("顾客3")
    print "顾客2："
    waiter.Notify("顾客2")

