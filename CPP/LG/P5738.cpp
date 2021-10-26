#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
vector<double> fin;
vector<int> a;
void bubbleSort2(vector<double>& a)
{
      bool swapp = true;
      while(swapp)
      {
        swapp = false;
        for (size_t i = 0; i < a.size()-1; i++) 
        {
            if (a[i]>a[i+1] )
            {
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}
void bubbleSort(vector<int>& a)
{
      bool swapp = true;
      while(swapp)
      {
        swapp = false;
        for (size_t i = 0; i < a.size()-1; i++) 
        {
            if (a[i]>a[i+1] )
            {
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swapp = true;
            }
        }
    }
}
double aver(vector<int> &a,int m)
{
    
    int add=0;
    bubbleSort(a);
    for(int j=1;j<m-1;j++)
    {
        add+=a[j];
        
    }
    return add*1.0/(m-2);
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int l=0;l<m;l++)
        {
        int k=0;
        cin>>k;
        a.push_back(k);
        }
    fin.push_back(aver(a,m));
    a.clear();
    }
    bubbleSort2(fin);
    cout<<fixed<<setprecision(2)<<fin[n-1]*1.0;
    return 0;
}
