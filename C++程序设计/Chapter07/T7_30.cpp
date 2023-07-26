/*
  FileName:T7_30.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <array>
using namespace std;
//正序打印array对象 
void printArray(array<int,10>a,int x,int y)
{
	if(x == y)
	cout << a[y];
	else
    {
    	cout << a[x] << " ";
    	return printArray(a,x+1,y);
	}
}

int main()
{
	array<int,10>a={0,1,2,3,4,5,6,7,8,9};
	int x = 0;
	int y = a.size()-1;
	
	printArray(a,x,y);
	return 0;
 } 
