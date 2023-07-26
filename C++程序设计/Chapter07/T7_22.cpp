/*
  FileName:T7_22.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 10th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

const int s = 8;//数组的长度
//打印array对象 
void printArray(array<array<int,s>,s>a)
{
	for(int i = 0;i<a.size();i++)
	{
		for(int j = 0;j<a[s].size();j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
//判断当前是否可以移动 
bool canMove(array<array<int,s>,s>a,int row,int column)
{
	return row>=0&&row<s&&column>=0&&column<s&&a[row][column] == 0;
}
int main()
{
	//初始化数组为0 
	array<array<int,s>,s>board = {0};
	printArray(board);
	array<array<int,s>,s>access = 
	{
		2, 3, 4, 4, 4, 4, 3, 2,
        3, 4, 6, 6, 6, 6, 4, 3,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        3, 4, 6, 6, 6, 6, 4, 3,
        2, 3, 4, 4, 4, 4, 3, 2
	};
	//移动方式 
	array<int,s>horizontal = {2,1,-1,-2,-2,-1,1,2};
	array<int,s>vertical = {-1,-2,-2,-1,1,2,2,1};
	int m;
	bool p;
	
	bool q = true;//是否还能继续移动 
	
	int minRow,minCol; // 这里放的时通过access比较后的较小的（较难）的巡游方式 
	int minAccess=9; // 用这个来找到最小的access数组中的值
	int accessNumber; 
	
	int currentRow,currentColumn;//记录当前位置 
	int testRow,testColumn;//测试可能位置 
	srand((int)time(NULL));
	currentRow = rand() % 8;
	currentColumn = rand() % 8;
	int moveNumber = 1;//移动步数 
	board[currentRow][currentColumn] = moveNumber;
	
	while(q)
	{
		accessNumber=minAccess;
		//循环遍历所有移动方式，找出目标移动方式 
		for(m = 0;m<s;m++)
		{
		testRow = currentRow + vertical[m];
		testColumn = currentColumn + horizontal[m];
		p = canMove(board,testRow,testColumn);
		
		if(p)
		{
			if(access[testRow][testColumn]<accessNumber)
				{
					accessNumber=access[testRow][testColumn];
					minRow=testRow;
					minCol=testColumn;
				}
				access[testRow][testColumn]--;
			
		}
		}
		if(accessNumber==minAccess)
			q = false;
		else
		{
			currentRow=minRow;
			currentColumn=minCol;
			board[currentRow][currentColumn]=++moveNumber; 
		}
		
	}
	
	printArray(board);
	return 0;
}

