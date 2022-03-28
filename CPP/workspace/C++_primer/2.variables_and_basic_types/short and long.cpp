#include<iostream>
int main()
{
    unsigned short a = 1000000;// short 的最大值为16960
    std::cout << a << std::endl;
    unsigned int b =  10000000000;//int 的最大值为1410065408
    std::cout << b << std::endl;
    long d = 10000000000;//long 的最大值也为1410065408
    std::cout << d << std::endl;
    long long c = 100000000000000000000000;//long long 的最大值为200376420520689664
    std::cout << c << std::endl;//是否带符号（signed or unsigned 并不会影响其表示的最大数值）
    return 0; 
}