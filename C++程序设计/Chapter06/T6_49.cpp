/*
  FileName:T6_49.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
*/



#include <iostream>

using namespace std;
#define pi 3.1415926
inline double calculates(double r)
{
    return pi*r*r;
}
int main()
{
    double r;
    cin>>r;
    cout<<calculates(r)<<" "<<endl;
    return 0;
}
