#include<iostream>
#include<string>
using namespace std;
int main()
{
    string Name1,Name2;
    cin>>Name1;//cin会在第一个空白处截断
    cout<<Name1<<endl;
    getline(cin,Name2);
    cout<<Name1<<Name2;
}