/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 13时49分13秒
 ************************************************************************/

#include<iostream>
#include"PieceBoard.h"
#include"Piece.h"

using namespace std;

int main()
{
	PieceBoard board("AlphaGo", "LiShiShi");
	board.SetPiece(BLACK, PiecePos(4, 4));
	board.SetPiece(WHITE, PiecePos(4, 16));
	board.SetPiece(BLACK, PiecePos(16, 4));
	board.SetPiece(WHITE, PiecePos(16, 16));
	return 0;
}
