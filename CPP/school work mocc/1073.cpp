#include<iostream>
#include<math.h>
using namespace std;
double time(int people,double x,double y)
{
    double time1 = 2*sqrt(x*x+y*y)/50;
    double time2 = people*1.5;
    return time1+time2;
}
int main()
{
    int n;
    cin>>n;
    double x[n]={0};
    double y[n]={0};
    double peo[n]={0};
    double sum;
    for(int i=0;i<=n-1;i++)
    {
        cin>>x[i]>>y[i]>>peo[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        sum += time(peo[i],x[i],y[i]);
    }
    cout << ceil(sum);
    return 0;

}