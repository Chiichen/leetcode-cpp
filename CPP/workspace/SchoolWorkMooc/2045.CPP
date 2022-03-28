#include<iostream>
using namespace std;
int a[30][30];

int main()
{

    int n,num=1,x,y;
    cin>>n;

    a[0][n-1]=1;
    x=0;
    y=n-1;
    while(num<n*n)
    {

        while(x+1<n && !a[x+1][y])
            a[++x][y]=++num;
        while(y>=1&& !a[x][y-1])
            a[x][--y]=++num;
        while(x>=1&& !a[x-1][y])
            a[--x][y]=++num;
        while(y+1<n&& !a[x][y+1])
            a[x][++y]=++num;
    }
    for(x=0;x<=n-1;x++)
    {
        for(y=0;y<=n-1;y++)
        {
            cout<<a[x][y]<<" ";
        }
    cout<<endl;
    }
    return 0;
}