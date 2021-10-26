#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int o[100][100]={0};
    for(int i=1;i<=n;i++)
    {
        int a,b,g,k;
        cin>>a>>b>>g>>k;
        for(int j=a;j<=a+g;j++)
        {
            for(int l=b;l<=b+k;l++)
            {
                o[j][l]=i;
            }
        }

    }
    int x,y;
    cin>>x>>y;
    if(!o[x][y])
    {
        cout << -1;
    }
    else
    {
        cout<<o[x][y];
    }
    return 0;


}