#include<iostream>
int main()
{
    int in;
    std::cin>>in;
    int a=in/100%10;
    int b=in/10%10;
    int c=in%10;
    std::cout<<c*100+b*10+a;
}