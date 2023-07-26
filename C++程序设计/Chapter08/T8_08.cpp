/*
  FileName:T8_8.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/




#include<bits/stdc++.h>

using namespace std;

int const SIZE = 5;

int main()
{
	unsigned int values[SIZE];
	for(int i = 0; i < SIZE; i ++ ) values[i] = 2*(i + 1);
	
	unsigned int m;
	unsigned int *ptr = &m;
	
	for(auto i : values) cout << i << " ";
	cout << endl;
	
	ptr = values;
	ptr = &values[0];
	
	for(auto i = values; i < values + SIZE; i ++ ) cout << *i << " ";
	cout << endl;
	
	for(int i = 0; i < SIZE; i ++ ) cout << *(values + i) << " ";
	cout << endl;
	
	for(int i = 0; i < SIZE; i ++ ) cout << values[i] << " ";
	cout << endl;
	
	cout << values[4] << " " << *(values + 4) << endl;
	
	unsigned int *vptr = values + 4;
	vptr -= 4;
	for(auto i = vptr; i < values + SIZE; i ++ ) cout << *i << " ";
	cout << endl;
	return 0;
}

