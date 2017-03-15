# -*- coding:utf-8 -*-

class Play:

    def Play1(self):
        pass

    def Play2(self):
        pass

    def Play3(self):
        pass

class Player(Play):

    def Play1(self):
        print "战役"

    def Play2(self):
        print "军团"

    def Play3(self):
        print "神器"

class ProxyPlayerVip1(Play):

    def __init__(self):
        self.__player = Player()

    def Play1(self):
        self.__player.Play1()

    def Play2(self):
        self.__player.Play2()

    def Play3(self):
        print "没有权限"

class ProxyPlayerVip2(Play):

    def __init__(self):
        self.__player = Player()

    def Play1(self):
        self.__player.Play1()

    def Play2(self):
        self.__player.Play2()

    def Play3(self):
        self.__player.Play3()

if "__main__" == __name__:
    player1 = ProxyPlayerVip1()
    player2 = ProxyPlayerVip2()
    player1.Play1()
    player1.Play2()
    player1.Play3()
    player2.Play1()
    player2.Play2()
    player2.Play3()
