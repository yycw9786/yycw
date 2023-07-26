/*
  FileName:T5_18.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"十进制"<<"\t"<<"二进制"<<"\t"<<"八进制"<<"\t"<<"十六进制"<<endl;
    for(int i=1;i<=256;i++)
    {
        cout<<i<<"\t";
        int t1=i,t2=i,t3=i;
        int a[100],b[100],c[100];
        int n1=0,n2=0,n3=0;
        while(t1>0)
        {
            a[n1]=t1%2;
            t1=t1/2;
            n1++;
        }
        for(int j=n1-1;j>=0;j--)
        {
            cout<<a[j];
        }
        cout<<"\t";
        while(t2>0)
        {
            b[n2]=t2%8;
            t2=t2/8;
            n2++;
        }
         for(int j=n2-1;j>=0;j--)
        {
            cout<<b[j];
        }
        cout<<"\t";
        while(t3>0)
        {
            c[n3]=t3%16;
            t3=t3/16;
            n3++;
        }
         for(int j=n3-1;j>=0;j--)
        {
            cout<<c[j];
        }
        cout<<"\t"<<endl;
    }
    return 0;
}
