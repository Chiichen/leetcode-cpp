#include<iostream>
#include<cmath>
using namespace std;
int a[100][100]={};
double b[100][100]={};
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            b[i][j]=a[i][j];
        }
    }
    for(int i=1;i<=n-2;i++)
    {
        for(int j=1;j<=m-2;j++)
        {
            b[i][j]=round((a[i][j]+a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1])/5.0);
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            cout<<b[i][j]<<" ";
            
        }
        cout<<endl;
    }

    
}