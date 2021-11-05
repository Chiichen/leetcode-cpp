#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    for(auto &e:s1)
    {
        if(ispunct(e))
        {
            e=' ';
        }
    }
    cout<<s1;
}