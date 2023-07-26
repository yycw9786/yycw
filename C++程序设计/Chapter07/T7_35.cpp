/*
  FileName:T7_35.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 25th,2022
  College:School of Computer Science and Information Engineeering
*/
#include<iostream>
#include<array>
using namespace std;

int main()
{
	int n = 0, i = 0, u;
	float a, b, c, d, e, max = 0, min = 10;
	float f[5] = { 0 };
	array<int, 5 >topics = { 1,2,3,4,5 };
	array<array<int, 10>, 5> responses = { 0 };
	for (; n != 4 || i != 9;)
	{
		n = 0;
		cout << "请你对政治问题评价打分" << endl;
		cin >> u;
		cout << endl;
		responses[n][i] = u;
		n++;
		cout << "请你对环境问题评价打分" << endl;
		cin >> u;
		cout << endl;
		responses[n][i] = u;
		n++;
		cout << "请你对粮食问题进行评价打分" << endl;
		cin >> u;
		cout << endl;
		responses[n][i] = u;
		n++;
		cout << "请你对市场问题进行评价打分" << endl;
		cin >> u;
		cout << endl;
		responses[n][i] = u;
		n++;
		cout << "请你对教育问题进行评价打分" << endl;
		cin >> u;
		cout << endl;
		responses[n][i] = u;
		i++;
	}
	
	int a1[11] = {0};
	int a2[11] = {0};
	int a3[11] = {0};
	int a4[11] = {0};
	int a5[11] = {0};
		for(int k = 0;k<10;k++)
		{
			for(int p = 1;p<=10;p++)
			{
				if(responses[0][k] == p)
				a1[p]++;
			}
		}
			for(int k = 0;k<10;k++)
		{
			for(int p = 1;p<=10;p++)
			{
				if(responses[1][k] == p)
				a2[p]++;
			}
		}
			for(int k = 0;k<10;k++)
		{
			for(int p = 1;p<=10;p++)
			{
				if(responses[2][k] == p)
				a3[p]++;
			}
		}
			for(int k = 0;k<10;k++)
		{
			for(int p = 1;p<=10;p++)
			{
				if(responses[3][k] == p)
				a4[p]++;
			}
		}
			for(int k = 0;k<10;k++)
		{
			for(int p = 1;p<=10;p++)
			{
				if(responses[4][k] == p)
				a5[p]++;
			}
		}
	
	cout << "五种问题" << "\t" << "1 2 3 4 5 6 7 8 9 10" << endl; 
	for (a = 0, i = 0; i < 10; i++)
	{
		a += responses[0][i];
	}
	a /= 10;
	cout << "政治问题" << "\t";
	for (i = 1; i <= 10; i++)
	{
		cout << a1[i] << " ";
	}
	cout << "\t" << "平均分为：" << a << endl;
	
	for (b = 0, i = 0; i < 10; i++)
	{
		b += responses[1][i];
	}
	b /= 10;
	cout << "环境问题" << "\t";
	for (i = 1; i <= 10; i++)
	{
		cout << a2[i] << " ";
	}
	cout << "\t" << "平均分为：" << b << endl;
	
	for (c = 0, i = 0; i < 10; i++)
	{
		c += responses[2][i];
	}
	c /= 10;
	cout << "粮食问题" << "\t";
	for (i = 1; i <= 10; i++)
	{
		cout << a3[i] << " ";
	}
	cout << "\t" << "平均分为：" << c << endl;
	
	for (d = 0, i = 0; i < 10; i++)
	{
		d += responses[3][i];
	}
	d /= 10;
	cout << "市场问题" << "\t";
	for (i = 1; i <= 10; i++)
	{
		cout << a4[i] << " ";
	}
	cout << "\t" << "平均分为：" << d << endl;
	
	for (e = 0, i = 0; i < 10; i++)
	{
		e += responses[4][i];
	}
	e /= 10;
	cout << "教育问题" << "\t";
	for (i = 1; i <= 10; i++)
	{
		cout << a5[i] << " ";
	}
	cout << "\t" << "平均分为：" << d << endl;
	
	f[0] = a; f[1] = b; f[2] = c; f[3] = d; f[4] = e;
	for (i = 0; i < 5; i++)
	{
		if (f[i] > max)
		{
			max = f[i];
		}
	}
	if (max == f[0])
		cout << "政治问题总分最高为:" << f[0]*10;
	else if (max == f[1])
		cout << "环境问题总分最高为:" << f[1]*10;
	else if (max == f[2])
		cout << "粮食问题总分最高为:" << f[2]*10;
	else if (max == f[3])
		cout << "市场问题总分最高为:" << f[3]*10;
	else if (max == f[4])
		cout << "教育问题总分最高为:" << f[4]*10;
	for (i = 0; i < 5; i++)
	{
		if (f[i] < min)
		{
			min = f[i];
		}
	}
	if (min == f[0])
		cout << "政治问题总分最低为:" << f[0]*10;
	else if (min == f[1])
		cout << "环境问题总分最低为:" << f[1]*10;
	else if (min == f[2])
		cout << "粮食问题总分最低为:" << f[2]*10;
	else if (min == f[3])
		cout << "市场问题总分最低为:" << f[3]*10;
	else if (min == f[4])
		cout << "教育问题总分最低为:" << f[4]*10;
	return 0;
}

