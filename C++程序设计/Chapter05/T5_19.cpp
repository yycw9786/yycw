/*
  FileName:T5_19.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"项数"<<"\t"<<"近似值"<<endl;
    double a=0.0;
    double four=4.0;
    double ji=1;
    double t=1;
    for(int i=1;i<=1000;i++)
    {
        a+=four/ji*t;
        cout<<i<<"\t"<<a<<"\t"<<endl;
        ji+=2;
        t=-t;
    }
    return 0;
}
