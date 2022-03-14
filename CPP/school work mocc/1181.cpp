#include <bits/stdc++.h>
using namespace std;
bool more(int num1,int num2)
{
    return num1>num2;
}
int main()
{
    vector<int>odd;
    vector<int>even;
    int q=0;
    for (int i = 0; i < 10; i++)
    {
        cin>>q;
        q%2!=0?odd.push_back(q):even.push_back(q);
    }
    sort(odd.begin(),odd.end(),more);
    sort(even.begin(),even.end());
    for(auto e:odd)
    {
        cout<<e<<' ';
    }
    for(auto e:even)
    {
        cout<<e<<' ';
    }
    return 0;


}