/*
  FileName:T5_9.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int sum=1;
    for(int i=1;i<=15;i+=2)
    {
        sum*=i;
    }
    cout<<sum;
    return 0;
}
