#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,q=0;
    cin>>n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        cin>>q;
        vec.push_back(q);
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n/2; i++)
    {
        if(vec[i]==vec[i+n/2]){
        cout<<vec[i];
        return 0;
        } 
    }
    if(n%2==1&&vec[n/2]==vec[n-1]){
        cout<<vec[n/2];
        return 0;
    }
    cout<<"no";
    return 0;
    
    
}