#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double m;
    std::cin>>m;
    if(m>0)
    {
        cout<<fixed<<setprecision(2)<<m;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<-m;
    }

}