#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2,add;
    int n1=0,n2=0,jw=0;
    cin>>s1;//getline会WA！！考虑输入数据内带有空格
    cin>>s2;
    if(s1.length()>s2.length())
    {
        for(int i=s2.length();i<s1.length();i++)
        {
            s2='0'+s2;
        }
    }
    else if(s1.length()<s2.length())
    {
        for(int i=s1.length();i<s2.length();i++)
        {
            s1='0'+s1;
        }
    }
    for(int j=s1.length()-1;j>=0;j--)
    {
        n1=s1[j]-'0';
        n2=s2[j]-'0';
        add.push_back(((n1+n2+jw)%10)+'0');
        if(n1+n2+jw>=10)
        {
            jw=1;
        }
        else
        {
            jw=0;
        }


    }
    if(jw)
    {
        add=add+'1';
    }
    reverse(add.begin(),add.end());
    cout<<add;
}