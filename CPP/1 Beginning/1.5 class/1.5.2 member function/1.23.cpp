#include<iostream>
#include"Sales_item.hpp"
int main()
{
    Sales_item curbok;
    Sales_item bok;
    if(std::cin>>curbok)
    {
        int cnt=1;
        while(std::cin>>bok)
        {
            if (bok.isbn() == curbok.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout<<"Total selling of "
                <<curbok.isbn()<<" is "<<cnt
                <<std::endl; 
                curbok = bok; 
                cnt = 1;              
            }
        }
        std::cout<<"Total selling of"
        <<curbok.isbn()<<" is "<<cnt<<std::endl; 
        std::cout<<"222"<<std::endl;
    }
    return 0;
}
//对Ctrl+D/Z的次数需求可见https://stackoverflow.com/questions/28289534/c-primer-5th-1-4-4