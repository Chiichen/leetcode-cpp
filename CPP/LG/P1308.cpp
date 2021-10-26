#include<iostream>
#include<string>
#include<vector>
using namespace std;
void change(string& s)
{
    for(int i=0;i<s.size();i++)
    {
        if(int(s[i])>=97)
        {
            s[i]=char(s[i]-32);
        }
    }
}
int main()
{
    int num=0;
    string s1,s2;
    vector<int>vec1;
    getline(cin,s1);
    getline(cin,s2);
    change(s1);
    change(s2);
    s2.push_back(' ');
    for(int i=0;i<s2.size();i++)
    {
        int o=1;
        if((s2[i]==s1[0]&&i==0)||(s2[i]==s1[0]&&s2[i-1]==' '))
        {
            for(int j=0;j<s1.size();j++)
            {
                if(s1[j]!=s2[i+j])
                {
                    o=0;
                    break;
                }
            }
            if(s2[i+s1.size()]!=' ')
            {
                o=0;
            }
            if(o)
            {
                num++;
                vec1.push_back(i);
            }
        }
    }
    if(num==0)
    {
        cout<<-1;

    }
    else
    {
        cout<<num<<' '<<vec1[0];
    }
}