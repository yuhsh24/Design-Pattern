/*************************************************************************
    > File Name: WhitePiece.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 13时26分02秒
 ************************************************************************/

#include"WhitePiece.h"
#include<iostream>

using namespace std;

WhitePiece::WhitePiece():Piece(WHITE)
{
	;
}

WhitePiece::~WhitePiece()
{
	;
}

void WhitePiece::Draw()
{
	cout<<"绘制一只白棋！"<<endl;
}
