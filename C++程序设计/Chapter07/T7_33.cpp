/*
  FileName:T7_33.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
#include <iostream>
using namespace std;

char ch[12][12] =
{
	{'#','#','#','#','#','#','#','#','#','#','#','#'},
	{'#','.','.','.','#','#','.','.','.','.','.','#'},
	{'.','.','#','.','#','#','.','#','#','#','.','#'},
	{'#','#','#','.','#','#','.','.','.','#','.','#'},
	{'#','.','.','.','.','#','#','#','.','#','.','.'},	
	{'#','#','#','#','.','#','.','#','.','#','.','#'},
	{'#','.','.','#','.','#','.','#','.','#','.','#'},
	{'#','#','.','#','.','#','.','#','.','#','.','#'},
	{'#','.','.','.','.','.','.','.','.','#','.','#'},
	{'#','#','#','#','#','#','.','#','#','#','.','#'},
	{'#','.','.','.','.','.','.','#','.','.','.','#'},
	{'#','#','#','#','#','#','#','#','#','#','#','#'}
}; 
//显示x的当前移动状况 
void disp(int m,int n)
{
	cout << endl;
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			if(i==m&&j==n){
				cout << "x" << " ";
			}
			else
			{
				cout << ch[i][j] << " ";
			}
		}
		cout << endl;
	}
}
//递归函数找到迷宫出口 
void mazeTraverse(int d,int first=0,int m = 2 ,int n = 0 )
{
	//每次移动显示迷宫中x的位置
	disp(m,n);
	
	//若不是初始探寻，则判断是否到达迷宫边界
	if(!first&&(m==0||m==11||n==0||n==11))
			return;
	
	//可以向前走，且右手有墙，方向不变 
	// 可以向前走，但右手没墙，此时向前走，方向向右转 
	//否则不走，左转 
	switch(d)
	{
		case 0:	//向上
			if(ch[m-1][n]=='.'&&ch[m-1][n+1]=='#')   //可以向上直走
			{
				mazeTraverse(d,0,m-1,n);
				return; 
			} 
			//可以向上走，但向上之后右手没墙 
			else if(ch[m-1][n]=='.'&&ch[m-1][n+1]!='#')
			{			
				mazeTraverse(3,0,m-1,n);
				return;
			}
			// 否则不走，向左转 
			else										
				mazeTraverse(2,0,m,n);
			break; 
		case 1: //方向向下
			//可以向下直走
			if(ch[m+1][n]=='.'&&ch[m+1][n-1]=='#')   
			{
				mazeTraverse(d,0,m+1,n);
				return; 
			}
			//可以向下走但右手没墙，向右转
			else if(ch[m+1][n]=='.'&&ch[m+1][n-1]!='#')
			{	
				mazeTraverse(2,0,m+1,n);
				return;
			}
			// 否则不走，向左转 
			else											
				mazeTraverse(3,0,m,n);
			break;	
		case 2: //向左
			//可以向左直走
			if(ch[m][n-1]=='.'&&ch[m-1][n-1]=='#')   
			{
				mazeTraverse(d,0,m,n-1);
				return; 
			}
			//可以向左走但右手没墙，向右转 
			else if(ch[m][n-1]=='.'&&ch[m-1][n-1]!='#')
			{	
				mazeTraverse(0,0,m,n-1);
				return;
			}
			// 否则不走，向左转 
			else											
				mazeTraverse(1,0,m,n);
			break;
		case 3: //向右
			//可以向右直走
			if(ch[m][n+1]=='.'&&ch[m+1][n+1]=='#')   
			{
				mazeTraverse(d,0,m,n+1);
				return; 
			}
			//可以向右走但右手没墙，向右转
			else if(ch[m][n+1]=='.'&&ch[m+1][n+1]!='#')
			{	
				mazeTraverse(1,0,m,n+1);
				return;
			}
			// 否则不走，向左转 
			else												
				mazeTraverse(0,0,m,n);
			break;
	} 
} 

int main()
{
	mazeTraverse(3,1,2,0); 
	return 0;
}

