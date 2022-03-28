#include<iostream>
using namespace std;
int main()
{
    int n=0,x=0,y=0;
    cin>>n;
    int a[40][40]={0};
    a[(n-1)/2][0]=1;
    x=0;y=(n-1)/2;
    for(int i=2;i<=n*n;i++)
    {
        if(x==0&&y!=n-1)
        {
            a[y+1][n-1]=i;
            x=n-1;y=y+1;
        }
        else if(y==n-1&&x!=0)
        {
            a[0][x-1]=i;
            x=x-1;y=0;
        }
        else if(x==0&&y==n-1)
        {
            a[y][1]=i;
            x=1;
        }
        else if(x!=0&&y!=n-1&&a[y+1][x-1]==0)
        {
            a[y+1][x-1]=i;
            x=x-1;y=y+1;

        }
        else
        {
            a[y][x+1]=i;
            x=x+1;

        }
    }
    for(int m=0;m<n;m++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][m]<<' ';
        }
        cout<<endl;
    }

    return 0;
}