#include<iostream>
int main()
{
    int x,y;
    std::cin>>x>>y;
    if(x>y)
    {
        std::cout<<">";
    }
    else if(x==y)
    {
        std::cout<<"=";

    }
    else
    {
        std::cout<<"<";
    }
}