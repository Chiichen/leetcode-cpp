#include<iostream>
#include<cstring>
#define N 100010
using namespace std;
int a[N],n,s[N]={0};
long long ans=0;
void gb(int left,int right)
{
    if(left==right)return;
    int mid=(left+right)/2;
    gb(left,mid);gb(mid+1,right);
    int i=left,j=mid+1,tot=0;
    while(i<=mid&&j<=right)
        if(a[i]>a[j])s[++tot]=a[j++],ans+=mid-i+1;
        else s[++tot]=a[i++];
    while(i<=mid)s[++tot]=a[i++];
    while(j<=right)s[++tot]=a[j++];
    for(i=left;i<=right;i++)
        a[i]=s[i-left+1];
    return ;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    gb(1,n);
    cout<<ans<<endl;
}