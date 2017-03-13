# -*- coding:utf-8 -*-

from PieceBoard import *
from Piece import *

if "__main__" == __name__:
    board = PieceBoard("AlphaGo", "LiShiShi")
    board.SetPiece(PieceColor.BLACK, PiecePos(4, 4))
    board.SetPiece(PieceColor.WHITE, PiecePos(4, 16))
    board.SetPiece(PieceColor.BLACK, PiecePos(16, 4))
    board.SetPiece(PieceColor.WHITE, PiecePos(16, 16))
