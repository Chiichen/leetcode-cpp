#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0,ans=0;
    char ansal;
    int i=0,j=0;
    int n=str.size();
    sort(str.begin(),str.end());
    while(i<n&&j<n)
    {
        if(str[i]==str[j])
        {
            ++j;
            ++count;
        }
        else
        {
            if(count>ans)
            {
                ans=count;
                ansal=str[i];
            }
            count=0;
            i=j;
        }
        if(count>ans)
        {
            ans=count;
            ansal=str[i];
        }

    }
    cout<<ansal<<' '<<ans;
    return 0;

}