/*
  FileName:T7_16.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 10th,2022
  College:School of Computer Science and Information Engineeering
*/

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	array<int,13>a = {0};
	
	for(int i = 0;i<36000;i++)
	{
	int x = 1 + rand()%6;
	int y = 1 + rand()%6;
	int sum = x +y;
	
	a[sum]++;
	}
	for(int i = 2;i<=12;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
