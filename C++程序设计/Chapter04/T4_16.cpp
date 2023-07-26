/*
  FileName:T4_16.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    double s;
    while(a>0)
    {
        cout<<"Enter hours worked:"<<a<<endl;
        cout<<"Enter hourly rate of the employee: 10.00"<<endl;
        if(a>40)
            s=400+(a-40)*15;
        else
            s=a*10;
        cout<<"Salary is $"<<s<<endl;
        cin>>a;
    }
    return 0;
}
