#include<iostream>
#include<vector>
using namespace std;
void quicksort(vector<int>& a,int left,int right);
int main()
{
    vector<int>B;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k=0;
        cin>>k;
        B.push_back(k);

    }
    quicksort(B,0,n-1);
    for(auto e:B)
    {
        cout<<e;
    }
    return 0;
}

void quicksort(vector<int>& a,int left,int right)
{
    int i=left+1;
    int j=right;
    int flag=a[left];
    while(i<j)
    {
        while(a[i]<flag&&i<j)
        {
            i++;
        }
        while(a[j]>=flag&&i<j)
        {
            j--;
        }
        if(i<j)
        {
        swap(a[i],a[j]);
        }

    }
    if(!(i==left+1&&a[i]>a[left]))
    {
    swap(a[left],a[i]);        
    }

    cout<<i<<' ';
    for(auto e:a)
    {
        cout<<e<<'+';
    }
    cout<<endl;
    if(i-1>left)
    {
        quicksort(a,left,i-1);   
    }
    if(i+1<right)
    {
        quicksort(a,i,right);    
    }


    

}