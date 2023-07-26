

/*
  FileName:T6_55.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 7th,2022
*/


#include <iostream>
#include<ctime>
using namespace std;
int rollDice()
{
    srand(time(0));
    int die1=rand()%6+1;
    int die2=rand()%6+1;
    int sum=die1+die2;
    cout<<"Player rolled"<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}
int main()
{
    enum Status{CONTINUE,WON,LOST};
    srand(time(0));
    int myPoint=0;
    Status gameStatus=CONTINUE;
    int sumOfDice= rollDice();
    switch(sumOfDice)
    {
    case 7:
    case 11:
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"point is "<<myPoint<<endl;
        break;
    }
    while(CONTINUE==gameStatus)
    {
        sumOfDice=rollDice();
        if(gameStatus==myPoint)
            {
                gameStatus=WON;}
        else if(gameStatus==7)
            gameStatus=LOST;
    }
    if(WON==gameStatus)
        {cout<<"you win"<<endl;

        }
    else
        {



                cout<<"you loss"<<endl;}
    return 0;
}
