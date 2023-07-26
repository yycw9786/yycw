/*
  FileName:T6_48.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 5th,2022
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
void diaoyong()
{
    int bank=1000;
    int wager;
    while(1){cout<<"please come a wager: ";
    cin>>wager;
    while(wager>1000||wager<0)
        cin>>wager;
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
        bank+=wager;
                cout<<"your bank is : "<<bank<<endl;
                if(bank==0)
                    cout<<"sorry,you bust"<<endl;break;}
    else
        {
        bank-=wager;
                cout<<"your bank is : "<<bank<<endl;
                if(bank==0)
                cout<<"sorry,you bust"<<endl;
                cout<<"you loss"<<endl;break;}}
}
int main()
{
    diaoyong();
    return 0;
}
