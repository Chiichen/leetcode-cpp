#include<iostream>
int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout<<i+i<<std::endl;
    std::cout<<u+i<<std::endl;//当算式中既有无符号数
    //又有int值时，int就会转化成无符号数
    //无符号数减一个数时，需保证结果非负，否则仍会取模
    return 0;
}