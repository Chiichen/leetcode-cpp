#include<iostream>
int main()
{
    std::cout<<"Plz enter two number from small to latge"
    <<std::endl;
    int v1=0,v2=0;
    std::cin>>v1>>v2;
    std::cout<<"The number from "<<v1<<" to "<<v2<<" is ";
    for(int i=v1;i<=v2;++i)
        std::cout<<i<<" ";
    return 0;

}