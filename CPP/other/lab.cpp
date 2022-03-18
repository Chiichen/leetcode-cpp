#include <bits/stdc++.h>
#include<memory>
#include <string>
using namespace std;
void display(const char ch [])
    {
        string s1(ch);
        cout<<ch;
        delete [] ch;
        return;
    }
int main()
{
    display("asdasd");
    return 0;
}