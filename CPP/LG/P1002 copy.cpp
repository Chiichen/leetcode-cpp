#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    int bx,by,hx,hy;
    int con=0;
    cin>>bx>>by>>hx>>hy;
    hx+=1;
    int a[bx+3][by+2]={0};
    for(auto &e:a)
    {
        for(auto &l:e)
        {
            l=0;
        }
    }
    for(int i=1;i<bx+2;i++)
    {
        for(int j=0;j<by+1;j++)
        {
            if((i!=hx-2||j!=hy-1)&&(i!=hx-1||j!=hy-2)&&(i!=hx+1||j!=hy-2)&&(i!=hx+2||j!=hy-1)&&(i!=hx+1||j!=hy+2)&&(i!=hx+2||j!=hy+1)&&(i!=hx-2||j!=hy+1)&&(i!=hx-1||j!=hy+2)&&(i!=hx||j!=hy))
            {
                a[i][j]=1;
            }
        }
    }
        for(int i=0;i<bx+3;i++)
    {
        for(int j=0;j<by+2;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<"I is"<<i<<endl;
    }
    long long f[bx+1][by+1];
    memset(f,0,sizeof(f));
    f[1][0]=1,f[0][1]=1;
    for(int i=0;i<=bx;i++)
    {
        for(int j=0;j<=by;j++)
        {
            if(a[i][j]==0||(i==1&&j==0)||(i==0&&j==1))
            {
                continue;
            }
            f[i][j]=f[i-1][j]+f[i][j-1];
        }
    }
    for(auto &e:f)
    {
        for(auto &p:e)
        {
            cout<<p<<' ';
        }
        cout<<endl;
    }
    cout<<f[bx][by];
}