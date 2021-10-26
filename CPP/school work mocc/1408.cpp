#include<iostream>
#include<math.h>
using namespace std;
bool prime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
    
}
bool hui(int num)
{
    if(num/100%10==num%10)
    {
        return bool(1);
    }
    else{
        return bool(0);
    }
}
int main()
{
    int num,count=1;
    cin>>num;
    for(int j=100;j<=num;j++)
    {
        if(prime(j)&&hui(j))
        {
            count++;
        }
    }
    cout<<count;
}