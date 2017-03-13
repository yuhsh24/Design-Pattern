/*************************************************************************
    > File Name: Piece.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 10时55分16秒
 ************************************************************************/

#ifndef _PIECE_H_
#define _PIECE_H_

enum PieceColor {BLACK, WHITE};

struct PiecePos
{
	int x;
	int y;
	PiecePos(int _x, int _y);
};

class Piece
{
public:
	Piece(PieceColor _color);
	virtual ~Piece();
	virtual void Draw()=0;
private:
	PieceColor color;
};
#endif
