/*
  FileName:T5_29.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    double sum=24;
    int money=0;
    for(double i=0.05;i<=0.1;i+=0.1)
    {
        for(int j=1;j<=387;j++)
        {
            sum+=sum*i;
            cout<<sum*i<<endl;
        }
    }
    return 0;
}
