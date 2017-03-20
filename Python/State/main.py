# -*- coding:utf-8 -*-

from SiegeTank import *

if "__main__" == __name__:
    siegeTank = SiegeTank()
    siegeTank.EnterSiegeMode()
    siegeTank.Move(1, 1)
    siegeTank.Attack()
    siegeTank.EnterTankMode()
    siegeTank.Move(5, 5)
    siegeTank.Attack()
    
