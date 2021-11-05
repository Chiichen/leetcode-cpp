#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        *p=0;
        p+=1;
    }
    for(auto e:a)
    {
        cout<<e;
    }
}