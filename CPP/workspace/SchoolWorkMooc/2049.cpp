#include<iostream>
#include<string>
using namespace std;
void throwspace(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            for(int j=i;j<s.size();j++)
            {
                s[j]=s[j+1];
            }
        }
    }
}
int main()
{
    string s1,s2;
    int n=0;
    getline(cin,s1);
    getline(cin,s2);
    int n1=s1.size();
    int n2=s2.size();
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==' ')
        {
            for(int j=i;j<s1.size();j++)
            {
                s1[j]=s1[j+1];
            }
            i--;
            n1--;
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]==' ')
        {
            for(int j=i;j<s2.size();j++)
            {
                s2[j]=s2[j+1];
            }
            i--;
            n2--;
        }
    }
    if(n1==n2)
    {
        for(int i=0;i<=n1;i++)
        {
            if(int(s1[i])>90)
            {
                s1[i]=char(int(s1[i])+32);
            }
            else if(int(s2[i])>90)
            {
                s2[i]=char(int(s2[i])+32);
            }
            
        }
        for(int j=0;j<=n2;j++)
        {
            if(s1[j]!=s2[j]);
            n=1;
        }
        if(n)
        {
            cout<<"NOo"<<s1<<s2<<"2"<<s1.size()<<s2.size();
        }
        else
        {
            cout<<"YES";
        }
    }
    else
    {
        cout<<"NOoo"<<s1.size()<<s2.size();
    }
}