/*
  FileName:T6_36.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
*/



#include <iostream>

using namespace std;
int power(int a,int b)
{
    if(b==1)
        return a;
    return a*power(a,--b);
}
int main()
{
    int base;
    int exponent;
    cin>>base>>exponent;
    cout<<power(base,exponent);
    return 0;
}
