/*
  FileName:T6_19.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/



#include <iostream>
#include<cmath>
using namespace std;
double hypotenuse(double a,double b)
{
    return sqrt(a*a+b*b);
}
int main()
{
    cout<<
    hypotenuse(3.0,4.0)<<endl;
    cout<<hypotenuse(5.0,12.0)<<endl;
    cout<<hypotenuse(8.0,15.0)<<endl;
    return 0;
}
