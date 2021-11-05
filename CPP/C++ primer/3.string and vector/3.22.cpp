#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s1={"asdasd","sadasdasd","asdasd,afaf "};
    for(auto it=s1.begin();it!=s1.end()&&!it->empty();it++)
    {
        for(auto &e:(*it))
        {
            e=toupper(e);
            if(ispunct(e))
            {
                e=' ';
            }
        }
    }
    for(auto e:s1)
    {
        cout<<e<<endl;
    }
}