/*
  FileName:T4_37.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    double population=7.3e9,increase;
    cout<<"year\t"<<"population\t"<<"increase"<<endl;
    for(int year=1;year<=75;year++)
    {
        population=population*(1+0.01);
        increase=population*1/100;
        cout<<year<<"\t"<<population<<"\t"<<increase<<endl;
    }
    return 0;
}
