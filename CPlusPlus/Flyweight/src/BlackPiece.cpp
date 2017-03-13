/*************************************************************************
    > File Name: BlackPiece.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月13日 星期一 13时23分06秒
 ************************************************************************/

#include"BlackPiece.h"
#include<iostream>
using namespace std;

BlackPiece::BlackPiece():Piece(BLACK)
{
	;
}

BlackPiece::~BlackPiece()
{
	;
}

void BlackPiece::Draw()
{
	cout<<"绘制一只黑棋！"<<endl;
}

