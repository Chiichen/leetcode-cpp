#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
vector<int>vec;
int sum;
int main()
{
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        vec.push_back(k);
    }
    int m=vec.size();
    int max=0;
    int min=10;
    int pos1=0;
    int pos2=m-1;
    for(int j=0;j<m;j++)
    {
        if(vec[j]>=max)
        {
            pos1=j;
            max=vec[j];
        }
        if(vec[j]<=min)
        {
            pos2=j;
            min=vec[j];
        }
    }
    vec[pos1]=-1;
    vec[pos2]=-1;
    for(auto e:vec)
    {
        if(e!=-1)
        {
        sum+=e;            
        }

    }
    cout<<fixed<<setprecision(2)<<sum*1.0/(n-2);

}