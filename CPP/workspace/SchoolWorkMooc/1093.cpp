#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double x,ans=0;
    cin>>x>>n;
    for(int i=0;i<=n;i++)
    {
        ans+=pow(x,i);
    }
    cout<<fixed<<setprecision(2)<<ans;
}