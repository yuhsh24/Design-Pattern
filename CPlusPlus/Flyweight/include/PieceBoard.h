/*************************************************************************
    > File Name: PieceBoard.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 13时14分54秒
 ************************************************************************/

#ifndef _PIECEBOARD_H_
#define _PIECEBOARD_H_

#include"Piece.h"
#include<memory>
#include<string>
#include<vector>

class PieceBoard
{
public:
	PieceBoard(const std::string& bName, const std::string& wName);
	~PieceBoard();
	void SetPiece(const PieceColor& color, const PiecePos& piecePos);
private:
	std::shared_ptr<Piece> blackPiece;
	std::shared_ptr<Piece> whitePiece;
	std::string blackName;
	std::string whiteName;
	std::vector<PiecePos> vecPiecePos;
};
#endif
