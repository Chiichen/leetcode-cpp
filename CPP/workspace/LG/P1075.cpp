#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int findmax(vector<int>& a)
{
    int max =0;
    for(int i=0;i<a.size();i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
int prime(int k)
{
    for(int i=2;i<k;i++)
    {
        if(k%i==0)
        {
            return 0;
        }

    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> num1,num2,num3;
    for(int j=2;j<=sqrt(n);j++)
    {
        if(prime(j))
        {
            num1.push_back(j);
        }
    }
    for(int j=0;j<num1.size();j++)
    {
        if(n%num1[j]==0)
        {
            num2.push_back(num1[j]);
            if(prime(n/num1[j]))
            {
            num3.push_back(n/num1[j]);    
            }

        }
    }
    int max1=findmax(num2);
    int max2=findmax(num3);
    cout<<max(max1,max2);


}