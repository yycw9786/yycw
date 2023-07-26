/*
  FileName:T6_25.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/



#include <iostream>

using namespace std;

int calculatetime(int hour,int minute,int second)
{
    int sum=0;
    if(hour<12)
    {
        sum+=12*60*60;
        sum+=((hour-1)*60*60+60*minute+second);
    }
    else
        sum+=((hour-12)*3600+60*minute+second);
    return sum;
}
int main()
{
    int hour,minute,second;
    cin>>hour>>minute>>second;
    cout<<calculatetime(hour,minute,second)<<end;
    return 0;
}
