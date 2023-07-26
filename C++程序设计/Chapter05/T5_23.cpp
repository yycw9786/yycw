/*
  FileName:T5_23.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int n=9;
    for(int i=1;i<=5;i++)
    {
        for(int j=5-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int p=2*i-1;p>=1;p--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int p=2*(5-i)-1;p>=1;p--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
