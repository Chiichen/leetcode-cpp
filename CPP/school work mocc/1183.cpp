#include <bits/stdc++.h>
using namespace std;
struct student
{
    string ID;
    double score;
    int time;
};
bool Less(student s1,student s2)
{
    if(s1.score>=60&&s2.score>=60)
    {
        return s1.score==s2.score?s1.time<s2.time:s1.score>s2.score;
    }
    else if(s1.score>=60&&s2.score<60) return true;
    else if(s2.score>=60&&s1.score<60) return false;
    else
    {
        return true;
    }
}
int main()
{
    vector<student> vec1;
    vector<student>vec2;
    int n=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        student stu;
        cin>>stu.ID>>stu.score;
        stu.time=i;
        if(stu.score>=60) vec1.push_back(stu);
        else vec2.push_back(stu);
    }
    sort(vec1.begin(),vec1.end(),Less);
    for(auto e:vec1)
    {
        cout<<e.ID<<endl;
    }
    for(auto e:vec2)
    {
        cout<<e.ID<<endl;
    }

    return 0;
}