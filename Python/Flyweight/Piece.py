# -*- coding:utf-8 -*-

from enum import Enum

PieceColor = Enum("PieceColor", ("BLACK", "WHITE"))

class PiecePos:

    def __init__(self, _x, _y):
        self.x = _x
        self.y = _y

class Piece:

    def __init__(self, color):
        self.__pieceColor = color

    def Draw(self):
        pass

class BlackPiece(Piece):

    def __init__(self):
        Piece.__init__(self, PieceColor.BLACK)

    def Draw(self):
        print "绘制一只黑棋！"

class WhitePiece(Piece):

    def __init__(self):
        Piece.__init__(self, PieceColor.WHITE)

    def Draw(self):
        print "绘制一只白棋！"


