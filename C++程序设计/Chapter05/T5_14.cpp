/*
  FileName:T5_14.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int b[5];
    int sum_money=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<5;i++)
    {
        switch(i)
        {
            case 1:sum_money+=(a[i]*b[i]);break;
            case 2:sum_money+=(a[i]*b[i]);break;
            case 3:sum_money+=(a[i]*b[i]);break;
            case 4:sum_money+=(a[i]*b[i]);break;
            case 5:sum_money+=(a[i]*b[i]);break;
        }
    }
    cout<<sum_money;
    return 0;
}
