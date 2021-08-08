#include<iostream>
#include "Sales_item.hpp"
int main()
{
    Sales_item tolbok , curbok;    
    while (std::cin>>curbok){
        tolbok = curbok + tolbok ;//出现无法显示ISBN书号的问题，是因为
        //是tolbok为空内容，无法与ISBN号合并，调换顺序后得解决
    }
    std::cout<<tolbok<<std::endl;
    return 0;
}