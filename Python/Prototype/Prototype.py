# -*- coding:utf-8 -*-
import copy

class Resume:

    def __init__(self, name):
        self.name = name

    def Show(self):
        print self.name

    def SetName(self, name):
        self.name = name

    def Clone(self):
        pass

class ResumeA(Resume):

    def __init__(self, name):
        Resume.__init__(self, name)

    def Clone(self):
        return copy.deepcopy(self)

class ResumeB(Resume):

    def __init__(self, name):
        Resume.__init__(self, name)

    def Clone(self):
        return copy.deepcopy(self)

if "__main__" == __name__:
    aRe = ResumeA("A")
    bRe = ResumeB("B")
    aRe1 = aRe.Clone()
    bRe1 = bRe.Clone()
    aRe.Show()
    bRe.Show()
    aRe1.Show()
    bRe1.Show()
    del aRe
    del bRe
    aRe1.SetName("AA")
    bRe1.SetName("BB")
    aRe1.Show()
    bRe1.Show()


