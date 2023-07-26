/*
  FileName:T6_61.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 7th,2022
*/




#include <iostream>
#include<time.h>
using namespace std;
int sum;
void cf1(int n)
{
    srand(time(0));
    int a=rand()%9+1;
    int b=rand()%9+1;
    int c=rand()%9+1;
    int d=rand()%9+1;
    if(n==3)
    {sum=a*b;
    cout<<"How much is "<<a<<" times "<<b<<": ";return;}
    if(n==1)
        {sum=a+b;cout<<"How much is "<<a<<" plus "<<b<<": ";return;}
    if(n==2)
    {
        sum=a-b;cout<<"How much is "<<a<<" minus "<<b<<": ";return;
    }
    if(n==4)
    {
        sum=a/b;cout<<"How much is "<<a<<" division "<<b<<": ";return;
    }
    if(n==5)
    {
        sum=a*b+a-a/b;
        cout<<"How much is "<<a<<" times "<<b<<" plus "<<a<<" minus "<<a/b;return;
    }
    cout<<"How much is "<<a<<" times "<<b<<": ";
}
void cf2(int n)
{
    srand(time(0));
    int a=rand()%99+1;
    int b=rand()%99+1;
    int c=rand()%99+1;
    int d=rand()%99+1;
    if(n==3)
    {sum=a*b;
    cout<<"How much is "<<a<<" times "<<b<<": ";return;}
    if(n==1)
        {sum=a+b;cout<<"How much is "<<a<<" plus "<<b<<": ";return;}
    if(n==2)
    {
        sum=a-b;cout<<"How much is "<<a<<" minus "<<b<<": ";return;
    }
    if(n==4)
    {
        sum=a/b;cout<<"How much is "<<a<<" division "<<b<<": ";return;
    }
    if(n==5)
    {
        sum=a*b+a-a/b;
        cout<<"How much is "<<a<<" times "<<b<<" plus "<<a<<" minus "<<a/b;return;
    }
    cout<<"How much is "<<a<<" times "<<b<<": ";
}
int main()
{
    while(1)
    {A:double sum1=0;
    double sum2=0;
    while(1){
    int nandu,yusuan;
    cout<<"Please come a nandu"<<": ";
    cin>>nandu;
    cout<<"please come a yunsuan"<<": ";
    cin>>yusuan;
    if(nandu==1)
    cf1(yusuan);
    else
        cf2(yusuan);
    int n;
    cin>>n;
    while(n!=sum)
    {
        sum1++;
        if((sum1+sum2)==10)
        {
            if(sum2/10<0.75)
            {cout<<"Please ask your teacher for extra help."<<endl;goto A;}
            else
                {cout<<"Congratulations,you are ready to go to the next level!"<<endl;goto A;}

        }
        int q=rand()%4+1;
            switch(q){
case 1:
    cout<<"No.Please  try again!"<<endl; break;
case 2:
    cout<<"Wrong .Try once more."<<endl; break;
case 3:
    cout<<"Do not give up!"<<endl; break;
case 4:
    cout<<"No.Keep trying."<<endl; break;}
    cin>>n;
    }
    if(n==sum){
            sum2++;
            if((sum1+sum2)==10)
        {
            if(sum2/10<0.75)
            {cout<<"Please ask your teacher for extra help."<<endl;goto A;}
            else
                {cout<<"Congratulations,you are ready to go to the next level!"<<endl;goto A;}

        }
            int p=rand()%4+1;
    switch(p){
case 1:
    cout<<"Very good!"<<endl;
    break;
case 2:
    cout<<"Excellent!"<<endl; break;
case 3:
    cout<<"Nice work!"<<endl; break;
case 4:
    cout<<"Keep up the good work"<<endl; break;
    }}break;}}
    return 0;
}
