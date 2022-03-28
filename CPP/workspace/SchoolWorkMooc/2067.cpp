#include<iostream>
#include<iomanip>


using namespace std;
int main()
{
    double M_PI=3.14;
    double r;
    cin>>r;
    cout<<fixed<<setprecision(4)<<r*2<<" "<<2*r*M_PI<<" "<<r*r*M_PI<<endl;
    return 0;
}