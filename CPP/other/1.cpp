#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>n{0,1,2,3,5,1};
    vector<int>ans(*max_element(n.begin(),n.end()));
    for(auto e:ans) cout<<e;
}