/*
  FileName:T6_59.cpp
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
    while(1)
    {A:double sum1=0;
    double sum2=0;
    while(1){
    cf();
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
