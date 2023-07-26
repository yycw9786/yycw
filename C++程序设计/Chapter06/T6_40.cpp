/*
  FileName:T6_40.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
*/

#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<stack> 
#include<ctime>
#include<map>
#include<utility> 

using namespace std;

int factorial(int x)
{
	if(x == 0 || x == 1)
	{
		cout << x << "!" << " = " << 1 << endl;
		return 1;
	}
	else
	{
		int ans = factorial(x - 1) * x;
		cout << x << "!" << " = " << ans << endl;
		return ans;
	}
}

int main()
{
	int x; cin >> x;
	cout << factorial(x) << endl;
}
