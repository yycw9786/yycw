/*
  FileName:T6_29.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/



#include <iostream>
#include<cmath>

using namespace std;
bool isprimer1(int a)
{
    int flag=1;
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
            flag=0;
    }
    return flag;
}
bool isprimer2(int a)
{
    int flag=1;
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
            flag=0;
    }
    return flag;
}
int main()
{
    for(int i=2;i<=10000;i++)
    {
        if(isprimer1(i)==1)
            cout<<i<<endl;
    }
    for(int i=2;i<=10000;i++)
    {
        if(isprimer2(i)==1)
            cout<<i<<endl;
    }
    return 0;
}
