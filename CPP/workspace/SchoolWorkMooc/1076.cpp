#include<iostream>
using namespace std;
int main()
{
    int n,current=0,output=0;
    cin>>n;
    int a[n]={0},b[n]={0};
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int j=0;j<=n-1;j++)
    {
        if(a[j]<=140&&a[j]>=90&&b[j]>=60&&b[j]<=90)
        {
            current++;
        }
        else
        {
            if(current>=output)
            {
                output = current;
                current =0;
            }
            else
            {
                current =0;
            }
        }
        if(current>=output)
        {
            output = current;
        }

    }
    cout<<output;
    return 0;
    

}