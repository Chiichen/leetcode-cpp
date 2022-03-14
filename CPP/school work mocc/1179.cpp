#include<iostream>
#include<algorithm>
using namespace std;
struct stu
{
    int ID;
    int Chi;
    int Ma;
    int Eng;
    int Sum;
};stu a[301];
int camp(stu a,stu b)
{
    if(a.Sum>b.Sum)
    {
        return 1;
    }
    else if(a.Sum==b.Sum&&a.Chi>b.Chi)
    {
        return 1;
    }
    else if(a.Sum==b.Sum&&a.Chi==b.Chi&&a.ID<b.ID)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a[i].Chi,&a[i].Ma,&a[i].Eng);
        a[i].Sum=a[i].Chi+a[i].Ma+a[i].Eng;
        a[i].ID=i;
    }
    sort(a+1,a+n+1,camp);
    for(i=1;i<=5;i++)
    {
        printf("%d %d\n",a[i].ID,a[i].Sum);
    }
    return 0;
}