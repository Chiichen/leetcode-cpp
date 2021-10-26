#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s1[255]={0},s2[255]={0};
    cin>>s1;
    for(int i=0;i<255;i++)
    {
        switch(s1[i])
        {
            case 'A':
                s2[i]='T';
                break;
            case 'T':
                s2[i]='A';
                break;
            case 'C':
                s2[i]='G';
                break;
            case 'G':
                s2[i]='C';
                break;
            case '0':
                s2[i]='\0';
        }
    }
    cout<<s2;
}