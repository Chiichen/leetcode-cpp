#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> x(1100,0);
vector<int> y(1100,0);
void change(vector<vector<int>>& a,int A,int B,int C,int D,int k)//改变vector从(A,B)到(C,D)的值为k
{
    for (int i=A;i<=C;i++)
    {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
        for(int j=B;j<=D;j++)
        {
            a[i][j]=k;
        }
    }
}
vector<vector<int>>& div(vector<vector<int>>& a,vector<int>& b,vector<int>& c,int i,int n)
{
    if(i<=n)
    {
        int w=pow(2,n)/pow(2,i);
        for(int l=0;l<pow(3,i-1);l++)
        {
            change(a,b[l],c[l],b[l]+w,c[l]+w,0);
        }
        vector<int> d(1100,0);//暂存新的x
        vector<int> e(1100,0);//暂存新的y
        for(int j=0;j<pow(3,i-1);j++)
        {
            d[3*j]=b[j]+w/2;
            e[3*j]=c[j];
            d[3*j+1]=b[j]+w/2;
            e[3*j+1]=c[j]+w/2;
            d[3*j+2]=b[j];
            e[3*j+2]=c[j]+w/2;

        }
        for(int h=0;h<=pow(3,i);h++)
        {
            b[h]=d[h];
            c[h]=e[h];
        }
        d.clear();
        e.clear();
        return div(a,b,c,i++,n);
    }


}
int main()
{
    int n;
    cin>>n;
    int k=pow(2,n);
    vector<vector<int>> vec(k,vector<int>(k,1));
    int i=1;
    div(vec,x,y,i,n);
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<vec[i][j]<<endl;

        }
        cout<<endl;
    }
    
}