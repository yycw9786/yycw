/*
  FileName:T2_30.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 12th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int a=0;
    double b=0.0;
    cin>>a>>b;
    double bmi=a/(b*b)*1.0;
    cout<<bmi<<endl;
    cout<<"BMI VALUES"<<endl;
    cout<<"Underweight:"<<"\t"<<"less than 18.5"<<endl;
    cout<<"Normal:"<<"\t"<<"between 18.5 and 24.9"<<endl;
    cout<<"Overweight:"<<"\t"<<"between 25 and 29.9"<<endl;
    cout<<"Obese:"<<"\t"<<"30 or greater"<<endl;



    return 0;
}
