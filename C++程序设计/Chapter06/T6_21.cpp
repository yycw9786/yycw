/*
  FileName:T6_21.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/



#include <iostream>

using namespace std;
bool iseven(int a)
{
    if(a%2==0)
    return true;
    return false;
}
int main()
{
    int n;
    while(cin>>n){
    if(iseven(n)==true)

        cout<<"ÊÇ"<<endl;
    else
        cout<<"·ñ"<<endl;}
    return 0;
}
