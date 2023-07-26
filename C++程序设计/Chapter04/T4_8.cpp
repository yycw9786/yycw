/*
  FileName:T4_8.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 17th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    unsigned int i=1;
    unsigned int power=1;
    unsigned int x;
    unsigned int y;
    cin>>x>>y;
    while(i<=y)
    {
        power *=x;
        ++i;
    }
    cout<<power<<endl;
    return 0;
}
