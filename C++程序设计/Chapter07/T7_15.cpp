/*
  FileName:T7_15.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 10th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <array>
using namespace std;

const int row = 3;
const int column = 5;
int main()
{
	array<array<int,column>,row>sales;
	int counter = 1;
	//初始化array对象为1-15 
	for(size_t r = 0;r<sales.size();r++)
	{
		for(size_t c = 0;c<sales[r].size();c++)
		{
			sales[r][c] = counter;
			counter++;
		}
	}
	//按顺序输出array对象 
	for(size_t r = 0;r<sales.size();r++)
	{
		for(size_t c = 0;c<sales[r].size();c++)
		{
			cout << sales[r][c] << " ";
		}
	}
	
}
