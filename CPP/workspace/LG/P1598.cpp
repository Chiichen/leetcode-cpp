#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int a[26]={0};
int main()
{
    string s1,tem;
    for(int i=1;i<=4;i++)
    {
        getline(cin,tem);
        s1+=tem;
    }
    for(auto e:s1)
    {
        if(!(isspace(e)||ispunct(e)))
        {
            a[e-'A']++;
        }
    }
    int max=0;
    for(auto e:a)
    {
        if(e>=max)
        {
            max=e;
        }
    }
    char b[26][max]={' '};
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<max;j++)
        {
            if(a[i]>=(max-j))
            {
                b[i][j]='*';
            }
            else
            {
                b[i][j]=' ';
            }
        }   
    }
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<26;j++)
        {
            cout<<b[j][i]<<' ';
        }
        cout<<endl;
    }
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";


}