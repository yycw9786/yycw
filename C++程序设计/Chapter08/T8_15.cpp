/*
  FileName:T8_15.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 28th,2022
  College:School of Computer Science and Information Engineeering
*/


#include<iostream>

using namespace std;

int main()
{
	int sg,sum = 0;
	while(cin >> sg && sg > 0) sum += sg;
	cout << sum;
	
	sum = 0;
	for(int i = 0; i < 7; i ++ ) cin >> sg,sum += sg;
	cout << sum/7.0 << endl;
	
	cin >> sum >> sg;
	int ans = sg;
	while( -- sum ) cin >> sg,ans = max(sg,ans);
	cout << ans << endl;
	
	return 0;
}

