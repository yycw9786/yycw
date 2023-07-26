/*
  FileName:T6_10.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/





#include <iostream>
#include<cmath>
using namespace std;
const double PI=3.14159;
inline double sphereVolume(const double r)
{
    return 4.0/3.0*PI*pow(r,3);
}
int main()
{
    double r;
    cout<<"Enter the length of the r of your sphere: ";
    cin>>r;
    cout<<"Volume of sphere with r "<<r<<" is "<<sphereVolume(r)<<endl;

    return 0;
}
