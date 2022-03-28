#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m%3==0&&m%5==0&&m%7==0)
        cout<<"3 5 7";
    else if(m%3==0&&m%5==0&&m%7!=0)
        cout<<"3 5";
    else if(m%3==0&&m%7==0&&m%5!=0)
        cout<<"3 7";
    else if(m%5==0&&m%7==0&&m%3!=0)
        cout<<"5 7";
    else if(m%5==0&&m%7!=0&&m%3!=0)
        cout<<"5";
    else if(m%5!=0&&m%7==0&&m%3!=0)
        cout<<"7";
    else if(m%5!=0&&m%7!=0&&m%3==0)
        cout<<"3";
    else
        cout<<"n";
    

}