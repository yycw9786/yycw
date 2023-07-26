/*
  FileName:T6_38.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
*/


#include <iostream>
#include<string>
using namespace std;
int sum=0;
int hanuota(int n,char from,char temp,char to)
{
    if(n==1)
    {
        sum++;
        cout<<from<<"->"<<to<<endl;
        return 0;
    }
    hanuota(n-1,from,to,temp);
    sum++;
    cout<<from<<"->"<<to<<endl;
    hanuota(n-1,temp,from,to);
}
int main()
{
    int n;
    cin>>n;
    char from='1';
    char temp='2';
    char to='3';
    hanuota(n,from,temp,to);
    return 0;
}
