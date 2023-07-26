/*
  FileName:T6_39.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
*/




#include<iostream>
#include<time.h>

using namespace std;
typedef struct  //stack definition
{
	int n;
	int start;
	int temp;
	int end;
}hanuo;
hanuo han[10000];
int index=0;
void push(hanuo a)
{
	han[index]=a;
	index++;
}
hanuo pop()
{
	hanuo temp=han[index-1];
	index--;
	return temp;
}
void move(int n,int x,int y,int z)
{
	hanuo first;
	first.n=n;
	first.start=x;
	first.temp=y;
	first.end=z;
	push(first);
	while(index!=0)
	{
		hanuo abc=pop();
		int num=abc.n;
		int start=abc.start;
		int temp=abc.temp;
		int end=abc.end;
		if(num==1)
		{
			cout<<start<<"->"<<end<<endl;
		}
		else
		{
			hanuo temp1;
			temp1.n=num-1;
			temp1.start=start;
			temp1.temp=end;
			temp1.end=temp;
			push(temp1);
			cout<<start<<"->"<<end<<endl;
			temp1.n=num-1;
			temp1.start=temp;
			temp1.temp=start;
			temp1.end=end;
			push(temp1);
		}
	}

}
int main()
{
	long int time1,time2;
	time1=clock();
	move(10,1,2,3);
	time2=clock();
	double time=(double)(time2-time1)/1000;
	cout<<"spend "<<time<<endl;
}
