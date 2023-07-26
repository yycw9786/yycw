/*
  FileName:T2_19.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 10th,2022
 */



#include <iostream>

using namespace std;

int main()
{
    int a,b,c,Sum,Average,Product,Smallest,Largest;
    printf("Input three different integers:");
    scanf("%d %d %d",&a,&b,&c);
    Sum=a+b+c;
    Average=Sum/3;
    Product=a*b*c;
    printf("Sum is %d\n",Sum);
    printf("Average is %d\n",Average);
    printf("Product is %d\n",Product);
    if(a>b)
    {
        a=b;
    }
    if(a>c)
    {
        a=c;
    }
    printf("Smallest is %d\n",a);
    if(a<b)
    {
        a=b;
    }
    if(a<c)
    {
        a=c;
    }
    printf("Largest is %d",a);
    return 0;
}
