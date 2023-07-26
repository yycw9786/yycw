/*
  FileName:T7_14.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 10th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>a;
	bool p = true;
	int x;
	for(int i = 0;i<20;i++)
	{
		cin >> x;
	    if(x>=10 && x<=100)
	    {
	    		for(int j = 0;j<a.size();j++)
		{
			if(a[j] == x)
			{
				p = false;
				break;
			}
		}
		if(p)
		a.push_back(x);
		p = true;
		}
	}
	
	for(int i = 0;i<a.size();i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
