/*
  FileName:T5_11.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int year=0;
    cin>>year;
    double amount=0.0;
    double principle=0.0;
    double x=0.05;
    cin>>amount;
    for(x=0.05;x<=0.1;x+=0.01)
    {
        cout<<amount*pow(1.0+x,year)<<" ";
    }
    return 0;
}
