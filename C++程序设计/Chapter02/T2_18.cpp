/*
  FileName:T2_18.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 10th,2022
 */



#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is large.";
    else if(a<b)
        cout<<b<<" is large.";
    else if(a==b)
        cout<<"These numbers are equal.";

    return 0;
}
