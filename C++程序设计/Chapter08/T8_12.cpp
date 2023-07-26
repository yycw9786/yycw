/*
  FileName:T8_12.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Apr 27th,2022
  College:School of Computer Science and Information Engineeering
*/


#include<iostream>
#include<ctime>
#include<windows.h>

using namespace std;

class tort
{
	private:
		int dirt;
	public:
		tort(int dirc = 0) : dirt(dirc) {};
		void quick_walk() {dirt += 3;if(dirt < 0) dirt = 0;}
		void silde_down() {dirt -= 6;if(dirt < 0) dirt = 0;}
		void slow_walk()  {dirt += 1;if(dirt < 0) dirt = 0;}
		
		int dirtion() {return dirt;}
};

class rabit
{
	private:
		int dirt;
	public:
		rabit() {dirt = 0;}
		void sleeping() { };
		void quick_walk() {dirt += 9; if(dirt < 0) dirt = 0;}
		void silde_down() {dirt -= 12;if(dirt < 0) dirt = 0;}
		void slow_walk()  {dirt += 1; if(dirt < 0) dirt = 0;}
		void small_down() {dirt += 2; if(dirt < 0) dirt = 0;}
		
		int dirtion() {return dirt;}		
};

int main()
{
	srand(time(nullptr));
	tort tor;
	rabit rab;
	
	while(1)
	{
		int i = rand() % 10 + 1;
		if(i <= 2) {tor.quick_walk();rab.sleeping();}
		else if(i <= 3) {tor.quick_walk(); rab.quick_walk();}
		else if(i <= 5) {tor.quick_walk(); rab.silde_down();}
		else if(i <= 7) {tor.silde_down(); rab.slow_walk();}
		else if(i <= 8) {tor.slow_walk();  rab.slow_walk();}
		else if(i < 10) {tor.slow_walk();  rab.small_down();}
		
		if(tor.dirtion() >= 70 || rab.dirtion() >= 70)
		{
			cout << "Game ended.";
			
			if(tor.dirtion() >= 70 && rab.dirtion() >= 70)
				cout << "It's a tie.";
			else if(tor.dirtion() >= 70)
				cout << "TORTOISE WINS!!!YAY!!";
			else cout << "Hare wins.Yuch.";
			
			cout << endl;
			break;
		}
		
		int dirt_tor = tor.dirtion(),dirt_rab = rab.dirtion();
		cout << "#";
		for(int i = 0; i < 70; i ++ )
		{
			if(dirt_tor == i && dirt_tor == dirt_rab) cout << "[OUCH!!!]";
			else if(i == dirt_rab) cout << "H";
			else if(i == dirt_tor) cout << "T";
			else cout << "_";
		}
		cout << "#" << endl;
		
//		Sleep(200);//0.2s. Set to 1000 to change time to 1.0s.
		Sleep(1000);
	}
	
	return 0;
}
