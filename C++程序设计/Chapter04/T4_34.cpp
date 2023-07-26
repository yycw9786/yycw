/*
  FileName:T4_34.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,s;
    cin>>n;
    int i=1;
    s=n;
    while(i<n)
    {

        s=s*i;
        i++;
    }
    cout<<s<<endl;


    double n,i=1,j=1,s=0,e=0;
    cin>>n;
    while(i<=(n-1))
    {
        j*=1/i;
        s+=j;
        i++;
    }
    e=s+1;
    cout<<e<<endl;



    double x,Sn,An=1,sum=1;
    int n;
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        An=pow(x,i);
        Sn=1;

        for(int j=1;j<=i;j++)
        {
            Sn*=j;
        }
        sum+=An/Sn;



    }
    cout<<sum<<endl;
















    return 0;
}
