#include<iostream>
double eff(double tol,double val)
{
    return double(val/tol);
}
int main()
{
    int n;
    double val1,tol1;
    std::cin>>n>>val1>>tol1;
    double effe1 = eff(tol1,val1);
    for(int i=2;i<=n;i++)
    {
        double val ,tol;
        std::cin>>val>>tol;
        double effe = eff(tol,val);
        if(effe-effe1>0.05)
        {
            std::cout<<'better';            
        }
        else if(effe1-effe>0.05)
        {
            std::cout<<'woese';

        }
        else
        {
            std::cout<<'same';
        }
    }
    return 0;
}