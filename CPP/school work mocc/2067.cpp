#include<iostream>
#include<iomanip>
#include<math.h>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
    double r;
    cin>>r;
    cout<<fixed<<setprecision(4)<<r*2<<" "<<2*r*M_PI<<" "<<r*r*M_PI<<endl;
    return 0;
}