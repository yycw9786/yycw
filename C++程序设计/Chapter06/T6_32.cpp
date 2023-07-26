/*
  FileName:T6_32.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 3th,2022
*/



#include <iostream>

using namespace std;
int quality(int score)
{
    if(score>=90&&score<=100)
    {
        return 4;
    }
    else if(score>=80&&score<90)
    {
        return 3;
    }
    else if(score>=70&&score<80)
    {
        return 2;
    }
    else if(score>=60&&score<70)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int score=0;
    cin>>sco
    re;
    cout<<quality(score)<<endl;
    return 0;
}
