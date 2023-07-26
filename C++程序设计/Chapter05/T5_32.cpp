/*
  FileName:T5_32.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    double sum=10;
    for(double i=0.02;i<=0.05;i+=0.01)
    {
        double sum=10;
        for(int j=1;;j++)
        {
            sum+=i*sum;
            if(sum>=25)
            {
                cout<<"i="<<i<<" : "<<(j-2)/12+1+2012<<"Äê"<<(j-2)%12<<"ÔÂ"<<endl;
                break;
            }
        }
    }
    return 0;
}
