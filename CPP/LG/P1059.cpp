#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>vec;
vector<int>vec2;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=0;
        cin>>k;
        vec.push_back(k);
    }
    sort(vec.begin(),vec.end());
    auto it=vec.begin()+1;
    vec2.push_back(vec[0]);
    for(int i=1;i<vec.size();i++)
    {
        if(*it==*(it-1))
        {
            it++;
            continue;
        }
        else
        {
            vec2.push_back(vec[i]);
            it++;
        }
    }
    cout<<vec2.size()<<endl;
    for(auto e:vec2)
    {
        cout<<e<<' ';
    }



}