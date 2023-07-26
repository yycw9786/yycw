/*
  FileName:T7_31.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <string>
using namespace std;
//ÄæÐò´òÓ¡×Ö·û´® 
void stringReverse(string str,int x)
{
	if(x == 0)
	cout << str[0];
	else
	{
		cout << str[x]£» 
		return stringReverse(str,x-1);
	}
}

int main()
{
	string str;
	cin >> str;
	int x = str.size()-1;
	
	stringReverse(str,x);
	return 0;
}
