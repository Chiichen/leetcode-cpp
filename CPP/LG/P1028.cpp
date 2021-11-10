#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int f[1003];
int main()
{
    int n=0;
    cin>>n;
    memset(f,0,sizeof(f));
    f[1]=1,f[2]=2;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0)
        {
            f[i]=f[i-1]+f[i/2];
            
        }
        else if(i%2!=0)
        {
            f[i]=f[i-1];
        }
    }
    cout<<f[n];

    
}