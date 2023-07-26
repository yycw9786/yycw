/*
  FileName:T4_19.cpp
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
    int slargest=0;
    while(cin>>number){
        if(largest<number){
           largest=number;}

        if(cin.get()=='\n')
            break;
    }
    while(cin>>number)
    {
        if(slargest<number&&number<largest)
            slargest=number;
        if(cin.get()=='\n')
            break;
    }
    cout<<largest<<" "<<slargest<<endl;
    return 0;
}
