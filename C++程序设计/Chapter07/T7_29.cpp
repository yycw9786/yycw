/*
  FileName:T7_29.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
//递归回溯解决八皇后问题 
#include<iostream>
#include <cmath>
using namespace std;

//数组用来存放皇后所在的列数，共有n行n列，有sum种解法 
int a[10], n, num;

//检查能否在该位置放置皇后 ，k为当前皇后所在的列数 
bool check(int a[], int k)
{
	for (int i = 1; i <= k - 1; i++)
	{
		if ((fabs(a[i] - a[k]) == k - i) || (a[i] == a[k]))
//如果当前位置的左斜上方或者右斜上方有皇后，或者同一列有皇后返回false
			return false;
	}
	return true;
}

//k为行数 
void backtrack(int k)
{
	if (k>n)//表明已经找到解 
	{
		//输出各行皇后所在的列数 
		for (int i = 1; i <= 8; i++)
		{
			cout << a[i];
		}
		cout << endl;
		num++;   
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			a[k] = i;
			if (check(a, k))
			{
				backtrack(k + 1);
			}
		}
	}

}

int main()
{
	n = 8, num = 0;
	backtrack(1);
	cout <<"The ways of queens is" <<num << endl;
	return 0;
}
