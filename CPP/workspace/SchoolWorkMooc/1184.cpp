#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,q=0;
    vector<int>vec;
    cin>>n;
    for(int i = 0; i< n ; i++)
    {
        cin>>q;
        vec.push_back(q);
    }
    sort(vec.begin(),vec.end());
    auto ite = unique(vec.begin(),vec.end());
    vec.erase(ite,vec.end());
    cout<<vec.size()<<endl;
    for(auto e:vec)
    {
        cout<<e<<' ';
    }
    return 0;
}