# -*- coding:utf-8 -*-

from Piece import *

class PieceBoard:

    def __init__(self, blackName, whiteName):
        self.__blackName = blackName
        self.__whiteName = whiteName
        self.__blackPiece = None
        self.__whitePiece = None
        self.__vecPiecePos = []

    def SetPiece(self, color, pos):
        if (color == PieceColor.BLACK):
            if(self.__blackPiece == None):
                self.__blackPiece = BlackPiece()
            print "%s%s%d %d"%(self.__blackName, "在位置", pos.x, pos.y)
            self.__blackPiece.Draw()
        else:
            if(self.__whitePiece == None):
                self.__whitePiece = WhitePiece()
            print "%s%s%d %d"%(self.__whiteName, "在位置", pos.x, pos.y)
            self.__whitePiece.Draw()
        self.__vecPiecePos.append(pos)


