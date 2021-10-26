#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int s,v;
    cin>>s>>v;
    int a=ceil(s*1.0/v)+10;
    int h=0,m=a;
    for(int i=0;a-60*i>=60;i++)
    {
        h=i+1;
        m=a-60*(i+1);
    }
    if(h<=7)
    {
    cout<<setw(2)<<setfill('0')<<7-h;
    cout<<':';
    cout<<setw(2)<<setfill('0')<<60-m;
    }
    else
    {
    cout<<setw(2)<<setfill('0')<<24-(h-7);
    cout<<':';
    cout<<setw(2)<<setfill('0')<<60-m;
    }
}