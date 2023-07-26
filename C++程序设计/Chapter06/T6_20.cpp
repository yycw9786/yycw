/*
  FileName:T6_20.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/



#include <iostream>

using namespace std;
bool mutiple(int a,int b)
{
    if(b%a==0)
    {
        return true;
    }
    return false;
}
int main()
{
    if(mutiple(2,4)==1)
    cout<<"ÊÇ"<<endl;
    else
        cout<<"·ñ"<<endl;
    return 0;
}
