#include<iostream>
#include<iomanip>
using namespace std;
double ans(int n)
{
    if(n&1!=0)
    {
        return 1/double(n);
    }
    else
    {
        return -1/double(n);
    }
}
int main()
{
    int n;
    double anss=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            anss+=ans(i);
    }
    cout<<fixed<<setprecision(4)<<anss;
    return 0;
}