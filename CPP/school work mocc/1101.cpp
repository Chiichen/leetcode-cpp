#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n=0;
    cin>>a>>b>>c;
    for(int x=0;x<=c/a+1;x++)
    {
        for(int y=0;y<=c/b+1;y++)
        {
            if(a*x+b*y==c)
            {
                n++;
            }
        }
    }
    cout<<n;
}