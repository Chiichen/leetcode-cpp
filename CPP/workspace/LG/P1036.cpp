#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int ans=0;
int prime(int a)
{
    int k=sqrt(a);
    for(int i=2;i<=k;i++)
    {
        if(a%i==0)return 0;
    }
    return 1;
}
void rec(vector<int>& a,int start,int count,int sum,int m,int n)
{
    int i=0,ans=0;
    if(count==m&&prime(sum))
    {
        ans++;
    }
    for(int i=start;i<=n;i++)
    {
        rec(a,i+1,count+1,sum+a[i],m,n);
    }
    cout<<sum<<' ';
}
int main()
{
    int n=0,m=0;
    scanf("%d%d",&n,&m);
    vector<int>vec{0};
    for(int i=0;i<n;i++)
    {
        int k=0;
        cin>>k;
        vec.push_back(k);

    }
    rec(vec,1,0,0,m,n);
    cout<<ans;
    
}