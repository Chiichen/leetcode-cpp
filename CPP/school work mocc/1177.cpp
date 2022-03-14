#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n =0,q=0;
    string s1;
    std::vector<int>vec;
    std::cin>>n;
    for (int j = 0; j < n; j++)
    {
        std::cin>>q;        
        if(q%2==1)
        {

        vec.push_back(q);            
        }

    }
    sort(vec.begin(),vec.end());
    for(auto e:vec)
    {
        s1.push_back(e+'0');
        s1.push_back(',');
    }
    for (int i = 0; i < s1.size()-1; i++)
    {
        cout<<s1[i];
    }
    
    return 0;
    
}