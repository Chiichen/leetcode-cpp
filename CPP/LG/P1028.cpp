#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
int ans=1;
int count(int n,int k)
{
    string s1=to_string(n);
    for(int i=k/2;i>=1;i--)
    {
        string s2=to_string(i);
            ans++;
            count(stoi(s2+s1),k);


        
    }
    return ans;
}
int main()
{
    int n=0;
    cin>>n;
    cout<<count(n,n);
}