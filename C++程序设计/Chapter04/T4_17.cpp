/*
  FileName:T4_17.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int counter=0;

    int number=0;
    int largest=0;
    while(cin>>number){
        if(number>largest){
            largest=number;
        }
        if(cin.get()=='\n')
            break;

    }
    cout<<largest;
    return 0;
}
