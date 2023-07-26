/*
  FileName:T4_33.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        cout<<"可以";
    else
        cout<<"不可以";
    return 0;
}
