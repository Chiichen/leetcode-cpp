#include<iostream>
#include<math.h>
int *num(int m,int n)
{
    static int a[n]={};
    for(int i=0;i<=n-1;i++)
    {
        a[i]=m/int(pow(10,i))%10;
    }
    return a;
}