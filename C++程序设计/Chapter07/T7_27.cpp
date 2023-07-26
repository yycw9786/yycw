/*
  FileName:T7_27.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i; 
    //将数组全部初始化为1 
    array<int,1000>a = {0};
    for(i=2;i<=1000;i++)
    {
        a[i]=1;
    }
    //若下标有倍数关系，则修改为0 
    for(i=2;i<=1000;i++)
    {
        for(int c=i*2;c<=1000;c+=i)
        {
            a[c]=0;
        }
    }
    //输出数组 
    cout<<"1000以内的质数为："<<endl;
    for(i=2;i<=1000;i++)
    {
        if(a[i])
        cout<<i<<" ";
    }
    return 0;
}

