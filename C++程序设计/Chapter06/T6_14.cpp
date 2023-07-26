/*
  FileName:T6_14.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/



#include <iostream>
#include<cmath>
using namespace std;

void roundToInteger(double a)
{
    cout<<floor(a+0.5)<<endl;
    return;
}
void roundToTenths(double a)
{
    cout<<floor(a*10+0.5)/10<<endl;
    return;
}
void roundToHundreds(double a)
{
    cout<<floor(a*100+0.5)/100<<endl;
    return;
}
void roundToTousands(double a)
{
    cout<<floor(a*1000+0.5)/1000<<endl;
    return;
}
int main()
{
    roundToInteger(1.3);
    roundToTenths(1.39);
    roundToHundreds(1.395);
    roundToTousands(1.3956);
    return 0;
}
