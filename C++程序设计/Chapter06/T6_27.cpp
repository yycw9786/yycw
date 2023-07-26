/*
  FileName:T6_27.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/




#include <iostream>

using namespace std;

double min1(double a,double b,double c)
{
    if(a<b&&a<c)
        return a;
      if(b<a&&b<c)
        return b;
          if(c<a&&b>c)
        return c;
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<min1(a,b,c)<<endl;
    return 0;
}
