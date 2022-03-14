#include <bits/stdc++.h>
using namespace std;
int sorttimes(vector<int>&vec)
{
    if(vec.size()<2) return 0;
    int count =0;
    for(int end=vec.size()-1;end>0;end--)
    {
        for (int i = 0; i < end; i++)
        {
            if(vec[i]>vec[i+1]) swap(vec[i],vec[i+1]),++count;
        }
        
    }
    return count;
}
int main()
{
    int n =0,q=0;
    vector<int>vec;
    cin>>n;
    for (int j = 0; j < n; j++)
    {
        cin>>q;
        vec.push_back(q);
    }
    cout<<sorttimes(vec);
    return 0;
    
}