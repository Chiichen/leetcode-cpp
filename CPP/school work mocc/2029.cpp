#include<iostream>
int main()
{
    for(int i=100;i<=999;i++)
    {
        if(((i%10)*(i%10)*(i%10))+((i/10%10)*(i/10%10)*(i/10%10))+((i/100%10)*(i/100%10)*(i/100%10))==i)
        {
            std::cout<<i<<std::endl;
        }
    }
}