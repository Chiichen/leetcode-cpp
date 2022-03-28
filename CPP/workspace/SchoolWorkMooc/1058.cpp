#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double del = b*b-4*a*c;
    if(del<0&&fabs(del)>1e-15)
    {
        cout<<"No answer!";
    }
    else if(fabs(del)<1e-15)
    {
        cout<<fixed<<setprecision(5)<<"x1=x2="<<(-b)/(2*a);
    }
    else if(del>0&&fabs(del)>1e-15)
    {
        if(a<0)
        {
        cout<<fixed<<setprecision(5)<<"x1="<<(-b-sqrt(del))/(2*a)<<";"<<"x2="<<(-b+sqrt(del))/(2*a);    
        }
        else
        {
        cout<<fixed<<setprecision(5)<<"x1="<<(-b+sqrt(del))/(2*a)<<";"<<"x2="<<(-b-sqrt(del))/(2*a);        
        }
    }
    return 0;
}   