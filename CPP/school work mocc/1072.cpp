#include<iostream>
using namespace std;
int main()
{
    int n;
    double val1,tol1;
    cin>>n;
    double val[n]={0};
    double tol[n]={0};
    cin>>tol1>>val1;
    double eff=val1/tol1;
    for(int i=0;i<=n-2;i++)
    {
        double val2=0,tol2=0;
        cin>>tol2>>val2;
        val[i]=val2;
        tol[i]=tol2;
    }
    for(int i=0;i<=n-2;i++)
    {
        if(val[i]/tol[i]-eff>0.05)
            cout<<"better"<<endl;
        else if(eff-val[i]/tol[i]>0.05)
            cout<<"worse"<<endl;
        else
            cout<<"same"<<endl;

    }
    return 0;    

}