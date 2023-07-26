/*
  FileName:T6_12.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 1th,2022
*/





#include <iostream>
#include <iomanip>
using namespace std;
double calculatecharge(double h)
{
    double charge;
    if(h<=3)
        charge=2;
    else if(h>3&&h<19)
        charge=2+(h-3)*0.5;
    else
        charge=10;
    return charge;

}

int main()
{


    cout<<"Car"<<"\t"<<"Hours"<<"\t"<<"Charge"<<endl;


    cout<<1<<"\t"<<"1.5"<<"\t"<<fixed<<setprecision(2)<<calculatecharge(1.5)<<endl;
    cout<<2<<"\t"<<"4.0"<<"\t"<<fixed<<setprecision(2)<<calculatecharge(4.0)<<endl;
    cout<<3<<"\t"<<"24.0"<<"\t"<<fixed<<setprecision(2)<<calculatecharge(24.0)<<endl;


    cout<<"TOTAL"<<"\t"<<"29.5"<<"\t"<<"14.50"<<endl;
    return 0;
}
