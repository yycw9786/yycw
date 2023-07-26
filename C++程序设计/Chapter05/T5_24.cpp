/*
  FileName:T5_24.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
        for(int j=n/2-i+1;j>=1;j--)
        {
            cout<<" ";
        }
        for(int p=2*i-1;p>=1;p--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int p=2*(n/2+1-i)-1;p>=1;p--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
