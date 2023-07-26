/*
  FileName:T8_17.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 29th,2022
  College:School of Computer Science and Information Engineeering
*/


#include<iostream>
#include<iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::showpos;
using std::noshowpos;

#define i instuctionCounter

int const _READ		  = 10;
int const _WEITE   	  = 11;
int const _LOAD 	  = 20;
int const _STORE 	  = 21;
int const _ADD     	  = 30;
int const _SUBSTREAT  = 31;
int const _DIVIDE	  = 32;
int const _MULTIPLY   = 33;
int const _BRANCH 	  = 40;
int const _BRANCHNEG  = 41;
int const _BRANCHZERO = 42;
int const _HALT		  = 43;
int const _CINSTRING  = 50;

int const N = 1000;

int memory[N];//memory

static double accumulator;
static int instuctionCounter;

static int instrcutionRegister;

void welcome();
void cinInstrctionCounter();
int operationChoice(int,int);
void showAllState(int,int);
void cinString(int,int);
void endProgram();

int main()
{
	welcome();
	
	int operationCode;
	int operand;
	
	int cnt  = 0;
	while(1)
	{
		cout << std::setw(2) << std::setfill('0') << cnt << " ";
		++cnt;
		
		++ i;
		
		cinInstrctionCounter(); 
		if(instrcutionRegister == -99999)
		{
			showAllState(operationCode,operand);
			break;
		}
		operationCode = instrcutionRegister / 100;
		operand = instrcutionRegister % 100;
		
		int halt = operationChoice(operationCode,operand);
		
		if(halt)
		{
			showAllState(operationCode,operand);
			break;
		}
	}
	
	endProgram();
	
	return 0;
}

void welcome()
{
	cout << endl << endl;
	
	cout << "***       welcome to Simpletion!              ***" << endl;
	cout << "*** Please enter your program one instruction ***" << endl;
	cout << "*** (or data word) at a time.I will type the  ***" << endl;
	cout << "*** location number and a question mark (?).  ***" << endl;
	cout << "*** You then type the word for that location. ***" << endl;
	cout << "*** Type the sentine1 -99999 to stop entering ***" << endl;
	cout << "***           your program.                   ***" << endl;
	
	cout << endl << endl;
}

void endProgram()
{
	cout << endl;
	cout << "***      Program loading completed            ***" << endl;
	cout << "***      Program execution begins             ***" << endl;
	cout << endl;
}

void cinInstrctionCounter()
{
	cin >> instrcutionRegister;
	while(instrcutionRegister > 9999 || instrcutionRegister < 999 && instrcutionRegister != -99999)
	{
		cout << "Please key in correct number(1000~9999,-99999 to quit).\n";
		while(!(cin >> instrcutionRegister))
		{
			cin.clear();
			cout << "Warning : key in numbers correctly.(1000~9999,-99999 to quit).\n" << endl; 
			while(cin.get() != '\n') continue;
		}
	}
}

int operationChoice(int operation,int operand)
{
	int halt = 0;
	switch (operation) {
		case _READ:
			cout << "key in a number to " << operand << "...\n";
			cin >> memory[operand];
			cout << operand << " is changed successfully!\n";
			break;
		case _LOAD:
			accumulator = memory[operand];
			cout << operand << "..Accumulator changed successfully!\n";
			break;
		case _ADD:
			accumulator += memory[operand];
			cout << operand << "..Accumulator changed successfully!\n";
		case _BRANCH:
			instuctionCounter = operand;
			cout << instrcutionRegister 
				 << "is the next dirction you would goto..\n";
		case _CINSTRING:
			cinString(operation,operand);
			break;
		case _HALT:
			halt = 1;
			break;
		default:
			break;
	}
	
	return halt;
}

void showAllState(int operationCode,int operand)
{
	cout << "REGISTERS:" << endl;
	cout << "accumulator\t\t" << 
        "+" << std::setfill('0') << std::setw(4) << accumulator << endl;
	cout << "instuctionCounter\t" << noshowpos << i << endl;
	cout << "instrcutionRegister\t" << 
		"+" << std::setfill('0') << std::setw(4) << instrcutionRegister << endl;
	cout << "operationCode\t\t" << noshowpos << operationCode << endl;
	cout << "operand\t\t" << operand << endl;
	
	cout << "MRMONY:" << endl;
	cout << "\t";for(int j = 0; j < 10; j ++ ) cout << j << "\t";
	cout << endl;
	
	for(int j = 0; j < 10; j ++ )
	{
		cout << j*10 << "\t";
		
		for(int k = 0; k < 10; k ++ ) 
			cout << "+" << std::setfill('0') << std::setw(4) 
					<< memory[k + j*10] << '\t';
					
		cout << noshowpos << endl;
	}
}

void cinString(int operation,int operand)
{
	cout << "cin your string in a line..." << endl;
	std::string str;
	cin >> str;
	int len = str.length();
	auto start = memory + operand;
	
	if(len + start > memory + 100) 
		cout << "Your string is too long,sorry,func will exit safely.\n";
	else 
	{
		for(auto i = start; i < start + len && i < memory + 100; i ++ )
		{
			*i = (int)str[i - start] + 100*len;
		}
		cout <<"Your string has been safely saved!\n";
	}
	
	return ;
}

//C++的输入输出控制真离谱，比C复杂多了呜呜呜，狗都不用（？。 
