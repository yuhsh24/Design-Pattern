/*************************************************************************
    > File Name: Product.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年02月23日 星期四 13时51分02秒
 ************************************************************************/

#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include<vector>
#include<string>

class Product
{
public:
	void AddPart(std::string partName);
	void ShowProduct();
private:
	std::vector<std::string> parts;	
};
#endif
