/*
  FileName:T6_52.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 7th,2022
*/



#include <iostream>

using namespace std;
bool minimum(double a,double b)
{
    if(a>b)
        return 1;
    return 0;
}
int main()
{

    cin>>a>>b;
    if(minimum(a,b)==1)
        cout<<b<<endl;
    else
        cout<<a<<endl;
    return 0;
}
