/*
  FileName:T4_25.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int a=0;
    while(cin>>a)
    {


         for(int i=0;i<a;i++)
         {
             for(int j=0;j<a;j++)
                {if(i==0||i==a-1||j==0||j==a-1)
                cout<<"* ";
                 else
                    cout<<"  ";
                }
                cout<<endl;
          }

    }

}
