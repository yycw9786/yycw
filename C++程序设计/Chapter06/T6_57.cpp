
/*
  FileName:T6_57.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 7th,2022
*/


#include <iostream>
#include<time.h>
using namespace std;
int sum;
int cf()
{
    srand(time(0));
    int a=rand()%9+1;
    int b=rand()%9+1;
    sum=a*b;
    cout<<"How much is "<<a<<" times "<<b<<": ";
}
int main()
{
    while(1){
    cf();
    int n;
    cin>>n;
    if(n==sum)
        cout<<"Very good!"<<endl;
    while(n!=sum)
    {cout<<"No.Please  try again!"<<endl;
    cin>>n;
    }}
    return 0;
}
