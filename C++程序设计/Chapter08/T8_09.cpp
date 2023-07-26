/*
  FileName:T8_9.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/


#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main()
{
	long value1 = 20000,value2;
	
	long *longptr = &value1;
	
	cout << longptr << endl;
	
	value2 = *longptr;
	
	cout << value2 << endl;
	
	cout << &value1 << endl;
	
	cout << longptr << endl;
	
	return 0;
}

