#include<iostream>
using namespace std;
void t(int n,int m) 
{
    int r;
    r=n%m;
    n=n/m;    
    if(n!=0)
    {

        t(n,m);//只求终值就return F(n-1)；若要求出递归每一步就不return！！！！！！！
    }
    switch(r)
    {
        case 10:cout<<'A';break;
        case 11:cout<<'B';break;
        case 12:cout<<'C';break;
        case 13:cout<<'D';break;
        case 14:cout<<'E';break;
        case 15:cout<<'F';break;
        default :cout<<r;break;
    }
}
int main()
{
    int X,M;
    cin>>X>>M;
    t(X,M);
    return 0;
}