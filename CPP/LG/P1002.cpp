#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
long long move_x[9]{0,-2,-1,1,2,2,1,-1,-2};
long long move_y[9]{0,1,2,2,1,-1,-2,-2,-1};
int main()
{
    long long bx,by,hx,hy;
    cin>>bx>>by>>hx>>hy;
    long long f[bx+2][by+2];
    memset(f,0,sizeof(f));
    f[1][2]=1,f[2][1]=1;    
    for(long long i=0;i<9;i++)
    {
        if(hx+1+move_x[i]>0&&hy+1+move_y[i]>0)
        {
            f[hx+1+move_x[i]][hy+1+move_y[i]]=-1;
        }
    }

    for(long long i=1;i<=bx+1;i++)
    {
        for(long long j=1;j<=by+1;j++)
        {
            if(f[i][j]>=0&&(i!=1||j!=2)&&(i!=2||j!=1))
                {
                f[i][j]=max(move_x[0],f[i-1][j])+max(move_x[0],f[i][j-1]);    
                }
            
        }
      
    }
    cout<<f[bx+1][by+1];
    


}