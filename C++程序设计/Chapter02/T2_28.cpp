/*
  FileName:T2_28.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 12th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c,d,e;
    cin>>x;
    a=x/10000;
    b=(x-a*10000)/1000;
    c=(x-a*10000-b*1000)/100;
    d=(x-a*10000-b*1000-c*100)/10;
    e=x%10;

    cout <<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e<< endl;
    return 0;
}
