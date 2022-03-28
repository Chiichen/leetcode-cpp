#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int prime(int n)
{
    int k=sqrt(n);
    for(int i=2;i<=k;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int L;
    int sum=0;
    vector<int>a;
    cin>>L;
    for(int j=2;j<=L;j++)
    {
        if(prime(j)&&sum+j<=L)
        {
            a.push_back(j);
            sum+=j;
        }
    }
    for(auto e:a)
    {
        cout<<e<<endl;
    }
    cout<<a.size();

}