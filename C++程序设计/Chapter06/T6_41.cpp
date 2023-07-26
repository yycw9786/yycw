/*
  FileName:T6_41.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
*/




#include <iostream>

using namespace std;
int gong(int x,int y)
{
    if(y==0)
        return x;
    return gong(y,x%y);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gong(x,y);
    return 0;
}
