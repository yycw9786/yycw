
/*
  FileName:T6_22.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/


#include <iostream>

using namespace std;
void printzfx(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    printzfx(n);


    return 0;
}
