#include<iostream>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    int store[n]={0};
    for(int i=0;i<=n-1;i++)
    {
        cin>>store[i];
    }
    for(int j=0;j<=n;j++)
    {
        int cur=store[j];
        if(cur%10-(cur-cur%100)/1000-(cur%1000-cur%100)/100-(cur%100-cur%10)/10>0)
        {
            m++;
        }
    }
    cout<<m;
}
