#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="ab1b";
    for(auto& e:s)
    {
        e=toupper(e);
    }
    cout<<s;
}