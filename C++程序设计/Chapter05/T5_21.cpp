/*
  FileName:T5_21.cpp
  Author:yangjiasen 
  E-mail:2462980372@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int h_money=0;
    double hour=0;
    int geshu=0;
    int jianshu=0;
    int danjia=0;
    switch(n)
    {
    case 1:
        {
            cout<<"请输入经理苦丁工资"<<endl;
            int x;
            cin>>x;
            cout<<x<<endl;
            break;
        }
    case 2:
        {
            cout<<"请输入工作时间"<<endl;
            cin>>hour;
            cout<<"请输入前40h时资"<<endl;
            cin>>h_money;
            int money=0;
            if(hour<=40)
            {
                cout<<h_money*hour<<endl;
            }
            else{
                cout<<40*h_money+(hour-40)*1.5*h_money;
            }break;
        }
    case 3:
    {
        int gmoney=0;
        double xmoney=0;
        cout<<"请输入固定工资"<<endl;
        cin>>gmoney;
        cout<<"请输入其生产的销售额"<<endl;
        cin>>xmoney;
        cout<<xmoney*0.057+gmoney<<endl;break;
    }
    case 4:
        int jianshu=0;
        int gue=0;
        cout<<"请输入生产件数"<<endl;
        cin>>jianshu;
        cout<<"请输入固定金额"<<endl;
        cin>>gue;
        cout<<gue*jianshu<<endl;break;
    }
    return 0;
}
