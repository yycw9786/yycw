/*
  FileName:T2_23.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 12th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int x,y,a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    x=a;
    y=a;
    if(x>b){
        x=b;
    }
    if(x>c)
    {
        x=c;
    }
    if(x>d){
        x=d;
    }
    if(x>e){

        x=e;
    }
    if(y<b){
        y=b;
    }
    if(y<c){
        y=c;
    }
    if(y<d){
        y=d;
    }
    if(y<e){
        y=e;
    }
    cout<<y<<x<<endl;




    return 0;
}
