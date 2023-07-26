/*
  FileName:T7_32.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
//递归最小值函数，求一组数中的最小值 
int recursiveMinimum(array<int,9999>a,int x,int y)
{
   if(x+1 == y)
   return min(a[x],a[y]);
   else
   return min(a[x],recursiveMinimum(a,x + 1,y));
}

int main()
{
	//记录输入的一组数据 
	array<int,9999>a;
    int i,n;
    for( i = 0;1;i++)
    {
    	cin >> n;
    	if(n == -1)
    	break;
    	a[i] = n;
	}
	
	cout << recursiveMinimum(a,0,i-1);
	return 0;
}
