#include<iostream>
using namespace std;
int main()
{
    int a,b,n,ans;
    cin>>a>>b>>n;
    for(int i=1;i<=n;i++)
    {
    ans=a*10/b;    
    a=a*10%b;
    }
    cout<<ans;

}