/*
  FileName:T4_26.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int n=0;
    int y=0;
    cin>>a;
    n=a;
    while(n>0)
    {
        y=y*10+n%10;
        n/=10;
    }
    if(a==y)
        cout<<"是回文数";
    else
        cout<<"不是回文数";
    return 0;
}
