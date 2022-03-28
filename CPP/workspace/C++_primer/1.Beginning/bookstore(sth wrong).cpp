#include<iostream>
#include"Sales_item.hpp"
int main()
{
    Sales_item begin;
    Sales_item curin;
    Sales_item curout;
    if (std::cin>>begin)
    {
        int tran = 1;
        curout = begin;
        while (std::cin>>curin)        
        {
            if (begin.isbn()==curin.isbn())
            {
                curout += curin;
                ++tran;
            }
            else
            {
                std::cout<<"The book "<<curout.isbn()
                <<" have "<<tran<<" record: "<<curout<<std::endl;
                int tran = 1;
                curout = curin;
            }  
        }
        std::cout<<"The book "<<curout.isbn()
        <<" have "<<tran<<" record: "<<curout<<std::endl;        
         
    }
    
}