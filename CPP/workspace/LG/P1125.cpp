#include<iostream>
#include<string>
#include<math.h>
#include<vector>

using namespace std;
int findmax(vector<int>& a)
{
    int max =0;
    for(int i=0;i<a.size();i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
int findminexp0(vector<int>& a)
{
    int min =100;
    for(int i=0;i<a.size();i++)
    {
        if(a[i])
        {
        if(min>a[i])
        {
            min=a[i];
        }    
        }
        
    }
    return min;
}
int prime(int k)
{
    if(k<=1)
    {
        return 0;
    }
    for(int i=2;i<k;i++)
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
    string s1;
    cin>>s1;
    vector<int> s2(26,0);
    for(int i=0;i<s1.size();i++)
    {
        s2[int(s1[i])-97]++;
    }
    int maxn=findmax(s2);
    int minn=findminexp0(s2);
    if(prime(maxn-minn))
    {
        cout<<"Lucky Word\n"<<maxn-minn;
    }
    else
    {
        cout<<"No Answer\n"<<'0';
    }
}