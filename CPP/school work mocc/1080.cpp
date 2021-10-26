#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i =2;i<=1000000;i++)
    {
        if(a%i==b%i&&b%i==c%i)
        {
            cout<<i;
            break;
        }
    }

}