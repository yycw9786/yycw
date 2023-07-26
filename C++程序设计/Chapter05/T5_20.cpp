/*
  FileName:T5_20.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    for(int side1=3;side1<=500;side1++)
    {
        for(int side2=4;side2<=500;side2++)
        {
            for(int hypotenuse=5;hypotenuse<=500;hypotenuse++)
            {
                if(side1*side1+side2*side2==hypotenuse*hypotenuse)
                    cout<<side1<<"\t"<<side2<<"\t"<<hypotenuse<<endl;
            }
        }
    }
    return 0;
}
