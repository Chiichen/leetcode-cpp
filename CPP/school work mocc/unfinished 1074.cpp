#include<iostream>
using namespace std;
int main()
{
    int m=0,draw=0,left=0,mon=1,sum=0;
    bool a=1;
    for(int i=1;i<=12;i++)
    {
        cin>>m;
        draw = (300+left-m)/100;
        sum+=100*draw;
        left=300+left-m-100*draw;
        if(left<0)
        {
            a =1;
            int mon =i;
        }
        else{
            a=0;
        }

    }

    if(a)
    {
        cout<<-mon;

    }
    else
    {
        cout<<sum*1.2;
    }
}