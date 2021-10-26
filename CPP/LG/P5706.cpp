#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double t;
    int n;
    cin>>t>>n;
    cout<<fixed<<setprecision(3)<<t*1.0/n<<endl;
    cout<<2*n;
}