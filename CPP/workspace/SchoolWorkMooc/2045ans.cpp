#include<stdio.h>
#define N 30
int a[N][N];
int main()
{
    int n,count=1,x,y;
    scanf("%d",&n);
	a[0][n-1]=1;
	x=0;
	y=n-1;
    while(count<n*n)
	{
        while(x+1<n && !a[x+1][y])
			a[++x][y]=++count;
        while(y-1>=0 &&!a[x][y-1])
			a[x][--y]=++count;
        while(x-1>=0 &&!a[x-1][y])
			a[--x][y]=++count;
        while(y+1<n &&!a[x][y+1])
			a[x][++y] =++count;
    }
    for(x=0;x<n;x++)
	{
        for(y=0;y<n;y++)
            printf("%d ",a[x][y]);
        printf("\n");
    }
    return 0;
}
