/*************************************************************************
    > File Name: Facade.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月14日 星期二 10时51分19秒
 ************************************************************************/

#include"Facade.h"

void Facade::Build()
{
	Preprocesser::Preprocess();
	Compiler::Compile();
	Linker::Link();
}
