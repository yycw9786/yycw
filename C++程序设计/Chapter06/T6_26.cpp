/*
  FileName:T6_26.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/



#include <iostream>

using namespace std;

double calculate1(double a)
{
    return (a-32)/1.8;
}
int main()
{
    double a;
    cin>>a;
    cout<<calculate1(a)<<endl;
    return 0;
}

double calculate2(double a)
{
    return 32+a*1.8;
}
int main()
{
    double a;
    cin>>a;
    cout<<calculate2(a)<<endl;
    return 0;
}


double calculate1(double a)
{
    return (a-32)/1.8;
}
double calculate2(double a)
{
    return 32+a*1.8;
}
int main()
{
    for(double i=0;i<=100;i++)
    {
        cout<<i<<"\t"<<"
        : "<< calculate1(i)<<endl;
    }
    for(double i=32;i<=212;i++)
    {
        cout<<i<<"\t"<<": "<<calculate2(i)<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
