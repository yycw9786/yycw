/*
  FileName:T6_23.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/


#include <iostream>

using namespace std;

void printzfx(char fillCharacter,int side)
{
    for(int i=1;i<=side;i++)
    {
        for(int j=1;j<=side;j++)
        {
            cout<<fillCharacter;
        }
        cout<<endl;
    }
}
int main()
{
    char fillCharacter;
    int side;
    cin>>fillCharacter>>side;
    printzfx(fillCharacter,side);

    return 0;
}
