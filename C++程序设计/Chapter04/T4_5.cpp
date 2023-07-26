/*
  FileName:T4_5.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 17th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    unsigned int sum=0;
    unsigned int x=1;
    while (x<=10)
    {
        sum+=x;
        ++x;
    }
    cout << "The sum is: "<<sum<<endl;
    return 0;
}
