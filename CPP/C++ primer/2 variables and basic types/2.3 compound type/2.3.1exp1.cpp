#include<iostream>
int main()
{
    int ival = 1024;
    int &reval = ival;
    reval = 0;
    std::cout<<reval<<ival<<std::endl;
}