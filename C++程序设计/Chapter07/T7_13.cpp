/*
  FileName:T7_13.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 10th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int,20>a;
	bool p = true;
	int n = 0;
	int x;
	
	for(int i = 0;i<20;i++)
	{
		cin >> x;
	if(x>=10 && x<=100)
	{
		for(int i = 0;i<a.size();i++)
		{
			if(a[i] == x)
			{
				p = false;
				break;
			}
		}
		if(p)
		{
			a[n] = x;
			n++;
		}
		p = true;
	}
	}
	
	for(int i = 0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
