/*************************************************************************
    > File Name: BlackPiece.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 11时30分13秒
 ************************************************************************/

#ifndef _BLACKPIECE_H_
#define _BLACKPIECE_H_

#include"Piece.h"

class BlackPiece:public Piece
{
public:
	BlackPiece();
	virtual ~BlackPiece();
	virtual void Draw();
};
#endif
