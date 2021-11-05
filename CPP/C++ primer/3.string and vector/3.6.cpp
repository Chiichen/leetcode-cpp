#include<iostream>
#include<string>
using namespace std;
int main()
{
    const string s1="siwoxkasnd";
    for(char e:s1)
    {
        e='X';
    }
    cout<<s1;
}
