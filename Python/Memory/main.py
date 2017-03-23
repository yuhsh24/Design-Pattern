# -*- coding:utf-8 -*-

from GameRole import *
from CareTake import *

if "__main__" == __name__:
    gameRole = GameRole()
    careTake = CareTake()
    gameRole.BeingAttacked()
    print "保存的状态如下："
    gameRole.Show()
    careTake.SaveMemento(gameRole.Save())
    gameRole.BeingAttacked()
    gameRole.BeingAttacked()
    print "当前的状态如下："
    gameRole.Show()
    print "恢复保存的状态如下："
    gameRole.Load(careTake.Load())
    gameRole.Show()
