#include<iostream>
#include<cmath>
using namespace std;
char num[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int n,m;
void f(int x,int m)
{
    if(x/m==0)
    {
        cout<<num[x%m];
        //return;
    }
    else
    {
        f(x/m,m);
        cout<<num[x%m];
    }
}
int main()
{
    cin>>n>>m;
    f(n,m);
    cout<<endl;
    return 0;
}