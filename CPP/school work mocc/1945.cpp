#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    vector<string> ans1;
    for (int i = n; i >=1 ; i--)//构造x^n
    {
        string cur;
        cur.push_back('x');
        cur.push_back('^');
        cur=cur+to_string(i);
        ans1.push_back(cur);
        cur.clear();
    }
    int k=0;
    int bo=1;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k==0) {
            continue;
        }
        else if(i==n-1&&(!bo)){
            if(k>1) cout<<'+'<<k<<'x';
            else if(k==1) cout<<'+'<<'x';
            else if(k<0)cout<<k<<'x';
        }
        else if(i==n-1&&bo){
            if(k>1) cout<<k<<'x';
            else if(k==1) cout<<'x';
            else cout<<'-'<<k<<'x';
        }
        else if(k==1&&i!=0) cout<<'+'<<ans1[i];
        else if(k==1&&i==0) cout<<ans1[i];
        else if(k==-1) cout<<'-'<<ans1[i];
        else {
            if(k<0||i==0) cout<<k<<ans1[i];
            else  cout<<'+'<<k<<ans1[i];
        }
        bo=0;
    }
    cin>>k;
    if(k!=0) cout<<(k>0?'+':'-')<<abs(k);
    return 0;
}