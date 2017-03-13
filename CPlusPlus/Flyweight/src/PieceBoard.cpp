/*************************************************************************
    > File Name: PieceBoard.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 13时28分08秒
 ************************************************************************/

#include"PieceBoard.h"
#include"WhitePiece.h"
#include"BlackPiece.h"
#include<iostream>

using namespace std;

PieceBoard::PieceBoard(const string& bName, const string& wName):blackName(bName), whiteName(wName)
{
	;
}

PieceBoard::~PieceBoard()
{
	;
}

void PieceBoard::SetPiece(const PieceColor& color, const PiecePos& piecePos)
{
	if(color == BLACK)
	{
		if(!blackPiece)
		{
			blackPiece = make_shared<BlackPiece>();
		}
		cout<<blackName<<"在位置"<<piecePos.x<<" "<<piecePos.y<<endl;
		blackPiece->Draw();
	}
	else
	{
		if(!whitePiece)
		{
			whitePiece = make_shared<WhitePiece>();
		}
		cout<<whiteName<<"在位置"<<piecePos.x<<" "<<piecePos.y<<endl;
		whitePiece->Draw();

	}
	vecPiecePos.push_back(piecePos);
}
