#include <bits/stdc++.h>
using namespace std;
struct student
{
    string gender;
    double height;
};
bool more(const student& s1, const student& s2)
{
    return s1.gender=="male"?s1.height<s2.height:s1.height>s2.height;
}

int main()
{
    vector<student>male;
    vector<student>female;
    double q=0;
    int n=0;
    cin>>n;
    string str;
    student stu;
    for (int i = 0; i < n; i++)
    {
        cin>>str>>q;
        if(str=="male")
        {
            stu.gender="male";
            stu.height=q;
            male.push_back(stu);
        }
        else
        {
            stu.gender="female";
            stu.height=q;
            female.push_back(stu);
        }
    }
    sort(male.begin(),male.end(),more);
    sort(female.begin(),female.end(),more);
    for(auto e:male)
    {
        cout<<fixed<<setprecision(2)<<e.height<<' ';
    }
    for(auto e:female)
    {
        cout<<fixed<<setprecision(2)<<e.height<<' ';
    }
    return 0;
}