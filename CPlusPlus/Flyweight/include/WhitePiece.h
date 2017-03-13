/*************************************************************************
    > File Name: WhitePiece.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 11时35分20秒
 ************************************************************************/

#ifndef _WHITEPIECE_H_
#define _WHITEPIECE_H_

#include"Piece.h"

class WhitePiece:public Piece
{
public:
	WhitePiece();
	virtual ~WhitePiece();
	virtual void Draw();
};
#endif
