#include<iostream>
using namespace std;
int main()
{
    int m,n,k=0;
    cin>>m>>n;
    int left =m;
    int num[n]={0};
    for(int i=0;i<=n-1;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        if(left-num[i]<0)
        {
            k++;
        }
        else
        {
            left-=num[i];
        }
    }
    cout<<k;
}