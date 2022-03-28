#include<iostream>
#include<iomanip>
using namespace std;
long double ans(int n,double q,double p) 
{
    if(n<=1)
        return q/p;
    else
        return ans(n-1,q+p,q);
}
int main()
{
    int n;
    cin>>n;
    double anss;
    for(int i=1;i<=n;i++)
    {
        anss+=ans(i,double(2),double(1));
    }
    cout<<fixed<<setprecision(4)<<anss;

    
}