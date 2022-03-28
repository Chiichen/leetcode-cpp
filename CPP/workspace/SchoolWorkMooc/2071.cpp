#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,y;
    std::cin>>x>>y;
    std::cout<<fixed<<setprecision(4)<<(87*x+85*y)/(x+y);
}