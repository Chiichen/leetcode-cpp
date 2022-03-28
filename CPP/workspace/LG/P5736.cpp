#include<iostream>
#include<math.h>
using namespace std;
int z(int k)//质数筛函数
{
    if(k==1)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(k);i++)
    {
        if(k%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
        
    }
    for(int j=0;j<n;j++)
    {
        if(!z(a[j]))
        {
            a[j]=0;
        }
        
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]!=0)
        {
            cout<<a[j]<<' ';
        }
    }
        

}