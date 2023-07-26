/*
  FileName:T4_14.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    double b,c,d,e,s;
    while(a>0)
    {
        cin>>a;
        cin>>b>>c>>d>>e;
        s=b+c-d;
        if(s>e){
            cout<<"New balance is "<<s<<endl;
            cout<<"Account:       "<<a<<endl;
            cout<<"Credit limit:  "<<e<<endl;
            cout<<"Balance:       "<<s<<endl;
            cout<<"Credit Limit Exceeded."<<endl;
        }
        else
            cout<<"New balance is "<<s<<endl;
    }

    return 0;
}
