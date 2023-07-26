/*
  FileName:T6_50.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 7th,2022
*/




#include <iostream>

using namespace std;
int tripleByValue(int count)
{
    return 3*count;
}
void tripleBuReference(int &count)
{
    count*=3;
    return;
}
int main()
{
    int count;
    cin>>count;
    cout<<tripleByValue(count)<<endl;
    cout<<count<<endl;
    tripleBuReference(count);
    cout<<count<<endl;
    return 0;
}
