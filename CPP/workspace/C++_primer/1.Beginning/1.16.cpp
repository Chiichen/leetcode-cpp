#include<iostream>
int main()
{
    int sum=0,val=0;
    while(std::cin>>val){  //Windows系统中Ctrl+Z，unix和mac OS X中 Ctrl+D输入文件结束符
    //或者输入小数来结束程序
        sum += val;
    }
    std::cout<<"Sum is "<<sum<<std::endl;
}