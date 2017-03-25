# -*- coding:utf-8 -*-

from UnitedNations import *
from Country import *

if "__main__" == __name__:
    council = UnitedNationsSecurityCouncil()
    USA = Country("美国", council)
    Iraq = Country("伊拉克", council)
    council.SetCountry1(USA)
    council.SetCountry2(Iraq)
    USA.Declare("制裁伊拉克")
    Iraq.Declare("我接受制裁")
