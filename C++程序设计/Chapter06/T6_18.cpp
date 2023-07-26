/*
  FileName:T6_18.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/



#include <iostream>

using namespace std;
int integerPower(int a,int b)
{
    int sum=1;
    for(int i=1
        ;i<=b;i++)
    {
        sum*=a;
    }
    return sum;
}
int main()
{
    cout<<integerPower(3,4)<<endl;
    return 0;
}
