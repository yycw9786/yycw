/*
  FileName:T4_20.cpp
  Author:yangjiasen
  E-mail:2462980372@qq.com
  Time:Mar 18th,2022
 */
#include <iostream>

using namespace std;

int main()
{
    int passes=0;
    int failures=0;
    int studentCounter=1;
    while(studentCounter<=10)
    {
        cout<<"Enter result(1=pass,2=fail): ";
        int result =0;
        cin>>result;
        if(result==1)
            passes+=1;
        if(result==2)
            failures+=1;
        else
            studentCounter-=1;
        studentCounter+=1;

    }
    cout<<"Passed\n"<<passes<<"Failed"<<failures<<endl;
    if(passes>8)
        cout<<"Bonus to instructor!"<<endl;

}
