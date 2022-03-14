#include <bits/stdc++.h>
using namespace std;
struct student
{
    string Name;
    int score;
};
bool More(const student& s1, const student& s2)
{
    return s1.score==s2.score?s1.Name[0]<s2.Name[0]:s1.score>s2.score;
}
int main()
{
    int n=0,q=0;
    string str;
    student stu;
    vector<student>vec;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>stu.Name;
        cin>>stu.score;
        vec.push_back(stu);
    }
    sort(vec.begin(),vec.end(),More);
    for(auto e:vec)
    {
        cout<<e.Name<<' ';
        cout<<e.score<<endl;
    }
    return 0;
}