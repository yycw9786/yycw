/*
  FileName:T6_28.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/



#include <iostream>

using namespace std;
void isperfect(int b)
{
    for(int i=1;i<=1000;i++)
    {
        int a[1000],sum1=0,sum=0;
        for(int j=1;j<i-1;j++)
        {
            if(i%j==0)
            {
                a[sum1]=j;
                sum+=j;
                sum1+=1;
            }
        }
        if(sum==i)
            {cout<<i<<": ";
        for(int p=0;p<sum1;p++)
        {
            cout<<a[p]<<" ";
        }
        cout<<endl;}
    }
    int a[1000],sum1=0,sum=0;
        for(int j=1;j<b-1;j++)
        {
            if(b%j==0)
            {a[sum1]=j;
                sum+=j;
                sum1+=1;
            }
        }
        if(b==sum)
            {cout<<b<<": ";
        for(int p=0;p<sum1;p++)
        {
        cout<<a[p];
        }
        cout<<endl;}
}
int main()
{
    isperfect(1200);
    return 0;
}
