
/*
  FileName:T6_53.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 7th,2022
*/


#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>

inline max(double a,double b) {return a > b;}

using namespace std;

int main()
{
	double a,b;
	cin >> a >> b;
    if(max(a,b)) cout << "a > b";
    else cout << "a < b";
    cout << endl;
    
    return 0;
}
