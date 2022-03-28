#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;
    int b=a*10;
    double c=(b%10*1000.0+b/10%10*100.0+b/100%10*10.0+b/1000%10*1.0)/1000;
    cout<<fixed<<setprecision(3)<<c;
}