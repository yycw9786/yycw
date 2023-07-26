/*
  FileName:T5_6.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int n=0;
    double sum=0.0;
    int sum1=0;
    int average=0;
    while(cin>>n)
    {
        if(n!=9999)
        {
            sum+=n;
            sum1+=1;
        }
        else
            break;
    }
    cout<<sum/sum1;
    return 0;
}
