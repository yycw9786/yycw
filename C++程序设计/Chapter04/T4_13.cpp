/*
  FileName:T4_13.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 17th,2022
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double mile,tmile=0,aver;
    int gallons,tgallons;
    cout <<"请输入本次里程数:";
    cin>>mile;
    cout<<setprecision(6)<<fixed;
    while(mile!=EOF)
    {
        cout<<"请输入本次使用的汽油加仑:";
        cin>>gallons;
        aver=mile/static_cast<double>(gallons);
        cout<<"本次耗油里程效率:"<<aver<<endl;
        tmile=tmile+mile;
        tgallons=tgallons+gallons;
        cout<<"总耗油里程效率:"<<tmile/static_cast<double>(tgallons)<<endl;
        cout<<"请输入本次里程数:";
        cin>>mile;

    }
    return 0;
}
