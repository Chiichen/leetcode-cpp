#include<iostream>
#include"Sales_item.hpp"
int main()
{
    Sales_item begin;
    Sales_item curin;
    Sales_item curout;
    if (std::cin>>begin)
    {
        curout = begin;
        while (std::cin>>curin)
        {
            if (curin.isbn()==begin.isbn())
            {
                curout += curin;
            }
            else
            {
                std::cout<<"The book "<<curout.isbn()
                <<" 's record is "<<curout<<std::endl;
                curout = curin;
            }
        }
        std::cout<<"The book "<<curout.isbn()
        <<" 's record is "<<curout<<std::endl;
        
    }
    else
    {
        std::cerr<<"Plz enter a sale record";
    }
    return 0;
    
}