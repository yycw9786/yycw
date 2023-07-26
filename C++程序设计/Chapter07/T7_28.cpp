/*
  FileName:T7_28.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <vector>
using namespace std;
//递归回文函数，判断字符串是否对称 
bool testPalindrome(vector<char>a,int x,int y,int s)
{
   if((y+1) == s && a[0] == a[s-1])
   return 1;
   else
   return (a[x] == a[y]) && testPalindrome(a,x - 1,y + 1,s); 	
}

int main()
{
	//使用string[]也可以 
	//将字符串存储在动态字符数组中 
	vector<char>a;
	char ch;
	while(true)
	{
		ch = getchar();
		if(ch == '\n')
		break;
		a.push_back(ch);
	}
	//求出中间对称的数组下标x,y 
	int s = a.size();
	int x,y;
	if(s % 2 != 0)
	{
	    x = s/2-1;
	    y = s/2+2-1;	
	}
	else if(s % 2 == 0)
	{
		x = s/2-1;
		y = s/2+1-1;
	}
	
	cout << testPalindrome(a,x,y,s);
	return 0;
}
