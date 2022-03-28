#include <bits/stdc++.h>
using namespace std;
struct student
{
    int ID;
    int score;
};
bool Less(student s1,student s2)
{
    return s1.score==s2.score?s1.ID<s2.ID:s1.score>s2.score;
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
    int num=k*3/2;
    while(vec[num-1].score==vec[num].score)
    {
        ++num;
    }
    cout<<vec[num-1].score<<' '<<num<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<vec[i].ID<<' '<<vec[i].score<<endl;
    }
    return 0;    
}
    
