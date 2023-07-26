/*
  FileName:T6_37.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
*/



#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10000];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[n-1]<<endl;
    return 0;
}
