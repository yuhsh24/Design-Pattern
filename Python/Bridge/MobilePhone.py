# -*- coding:utf-8 -*-

class MobilePhone:

    def RunSoftware(self, software):
        pass

class Iphone(MobilePhone):

    def RunSoftware(self, software):
        software.Run("Iphone ")

class Samsung(MobilePhone):

    def RunSoftware(self, software):
        software.Run("Samsung ")

