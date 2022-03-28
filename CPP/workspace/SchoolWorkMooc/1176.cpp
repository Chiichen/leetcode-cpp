#include <bits/stdc++.h>
using namespace std;
struct student
{
    int ID;
    double score;
};
bool Less(student s1,student s2)
{
    return s1.score>s2.score;
}
int main()
{
    vector<student> vec;
    int n=0,k=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        student stu;
        cin>>stu.ID>>stu.score;
        vec.push_back(stu);
    }
    sort(vec.begin(),vec.end(),Less);
    printf("%d %g",vec[k-1].ID,vec[k-1].score);
    return 0;
}