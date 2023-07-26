/*
  FileName:T6_30.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/




#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    for(int i=n-1;i>=0;i--)
        cout<<str[i];

    return 0;
}
