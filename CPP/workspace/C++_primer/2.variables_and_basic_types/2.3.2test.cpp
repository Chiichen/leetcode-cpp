#include<iostream>
int main()
{
    int m=0;
    int n=2;
    const int *p=&m;
    m=1;
    const int &n = 0;
    std::cout<<*p;
}                                                          