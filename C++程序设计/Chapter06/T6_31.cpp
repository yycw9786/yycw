/*
  FileName:T6_31.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/



#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    if(a<b){
    for(int i=a;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            return i;
        }
    }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
