#include<iostream>
using namespace std;

int t(int n)
{

    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*t(n-1);
        n--;        
    }

    
}
int main()
{
    int n;
    cin>>n;
    cout<<t(n);
}