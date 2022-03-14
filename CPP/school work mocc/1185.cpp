#include <bits/stdc++.h>
using namespace std;
bool strsort( string& str1, string& str2)
{
    
    return str1<str2;
}
int main()
{
    vector<string>vec;
    string str;
    while(cin>>str)
    {
        vec.push_back(str);
    }
    sort(vec.begin(),vec.end(),strsort);
    auto ite = unique(vec.begin(),vec.end());
    vec.erase(ite, vec.end());
    for(auto e:vec)
    {
        cout<<e<<endl;
    }
    return 0;
}