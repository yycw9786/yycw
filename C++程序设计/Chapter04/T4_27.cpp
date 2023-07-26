/*
  FileName:T4_27.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

string s;
int r,i,t=1;
int main()
{
    cin>>s;
    for(i=s.size()-1;i>=0;i--){
        r=r+(s[i]-'0')*t;
        t=t*2;
    }
    cout<<r;
    return 0;
}
