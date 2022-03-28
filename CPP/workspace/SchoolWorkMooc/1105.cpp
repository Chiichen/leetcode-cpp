#include<iostream>
int main()
{
    int a[100],n;
    std::cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        std::cin>>a[i];

    }
    for(int j=n-1;j>=0;j--)
    {
        std::cout<<a[j]<<" ";
    }
}