/*
  FileName:T7_19.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 10th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <iomanip>
#include <array>
#include <stdexcept>
using namespace std;

void outputArray1( const array<int,7>&array );
void inputArray1( array<int,7> &array );
void outputArray2( const array<int,10>&array );
void inputArray2( array<int,10> &array );

int main()
{
	array<int,7>integers1 = {0};
	array<int,10>integers2 = {0};
	cout<<"Size of array integers1 is "<<integers1.size()<<"\nArray after initialization: "<<endl;
	outputArray1(integers1);
	cout<<"\nSize of array integers2 is "<<integers1.size()<<"\nArray after initialization: "<<endl;
	outputArray2( integers2 );
	
	cout<<"\nEnter 17 integers:"<<endl;
	inputArray1(integers1);
	inputArray2(integers2);
	cout<<"\nAfter input,the array contain:\n"<<"integers1:"<<endl;
	outputArray1(integers1);
	cout<<"integers2:"<<endl;
	outputArray2(integers2);
	
	cout<<"\nintegers1[5] is "<<integers1[5];
	cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
	integers1[5] = 1000;
	cout<<"integers1:"<<endl;
	outputArray1(integers1 );
	
	try
	{
		cout<<"\nAttempt to display integers1.at(15)"<<endl;
		cout<<integers1.at(15)<<endl;
	}
	catch( out_of_range &ex )
	{
		cerr<<"An exception occurred: "<<ex.what()<<endl;
	}
	
}
void outputArray1( const array<int,7>&array )
{
	for(int item : array )
	cout<<item<<" ";
	cout<<endl;
}

void inputArray1( array<int,7> &array )
{
	for( int &item : array )
	cin>>item;
}

void outputArray2( const array<int,10>&array )
{
	for(int item : array )
	cout<<item<<" ";
	cout<<endl;
}

void inputArray2( array<int,10> &array )
{
	for( int &item : array )
	cin>>item;
}
