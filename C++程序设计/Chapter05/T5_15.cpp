/*
  FileName:T5_15.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    double a[5];
    double b[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    int t=5;
    double sum=0;
    while(t--)
    {
        int i=1;
        switch(i){
    case 1:
        sum+=b[i]*2.98;
        i++;
        break;
    case 2:
         sum+=b[i]*4.50;
         i++;
        break;
    case 3:
        sum+=b[i]*9.98;
        i++;
        break;
    case 4:
         sum+=b[i]*4.49;
         i++;
        break;
    case 5:
         sum+=b[i]*6.87;
         i++;
        break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
