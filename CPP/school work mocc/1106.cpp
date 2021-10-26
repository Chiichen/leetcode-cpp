#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];

    }
    double e=0,b=0,c=0,d=0;
    for(int j=0;j<=n-1;j++)
    {
        if(a[j]>=0&&a[j]<=18)
        {
            e++;
        }
        else if(a[j]>=19&&a[j]<=35)
        {
            b++;
        }
        else if(a[j]>=36&&a[j]<=60)
        {
            c++;
        }
        else if(a[j]>=61)
        {
            d++;
        }
        
    }
    cout<<fixed<<setprecision(2)<<e/n*100<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<b/n*100<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<c/n*100<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<d/n*100<<"%"<<endl;
}