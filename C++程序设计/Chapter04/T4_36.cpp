/*
  FileName:T4_36.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int i,a,b,c,d;
    cin>>i;
    a=i/1000;
    b=(i-a*1000)/100;
    c=(i-a*1000-b*100)/10;
    d=i%10;
    a=(a+7)%10;
    b=(b+7)%10;
    c=(c+7)%10;
    d=(d+7)%10;
    cout<<c<<d<<a<<b<<endl;
    return 0;
}
