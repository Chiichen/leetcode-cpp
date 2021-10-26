#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=0;
    int k=0;
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    if(s1.size()>=s2.size())
    {
        s1+=s1;
        for(int i=0;i<=s1.size()-2;i++)
        {
            for(int j=i+1;j<=s1.size()-1;j++)
            {
                s3.assign(s1,i,j);
                if(s2==s3)
                {
                    k=1;
                }
            }
        }
    }
    else
    {
        s1.swap(s2);
        s1+=s1;
        for(int i=0;i<=s1.size()-2;i++)
        {
            for(int j=i+1;j<=s1.size()-1;j++)
            {
                s3.assign(s1,i,j);
                if(s2==s3)
                {
                    k=1;
                }
            }
        }        
    }
    if(k)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

}