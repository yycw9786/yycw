/*
  FileName:T4_15.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cin>>a;

    while (a>0)
    {
        cout<<"Enter sales in dallars:"<<a<<endl;
        int s=200;


        b=a*9/100;
        s+=b;
        cout<<"Salary is:$"<<s<<endl;
        cin>>a;

    }

    return 0;
}
