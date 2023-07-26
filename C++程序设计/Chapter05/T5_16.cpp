/*
  FileName:T5_16.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int principle=1000;
    int rate=5;
    int year=0;
    cin>>year;
    cout<<principle+(principle*year)/100<<"."<<(principle*year)%100<<endl;
    return 0;
}
