/*
  FileName:T6_33.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/



#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void flip()
{
    int z=0,f=0;
    srand(time(0));
    for(int i=1;i<=100;i++)
    {
    int r=rand()%2;
    if(r==1)
        z+=1;
    else
    f+=1;

    }
    cout<<"正面"<<z<<endl;
    cout<<"反面"<<f<<endl;
}
int main()
{
    flip();

    return 0;
}
