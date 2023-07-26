/*
  FileName:T4_32.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a&&a-b<c&&a-c<b&&b-c<a)
        cout<<"是三角形";
    else
        cout<<"不是三角形";
    return 0;
}
