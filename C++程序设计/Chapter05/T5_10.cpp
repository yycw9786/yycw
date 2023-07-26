/*
  FileName:T5_10.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int sum=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
            sum*=j;
        cout<<sum<<"\t";
    }
    return 0;
}
