#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>vec;
int main()
{
    int n=0,tol=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k=0;
        cin>>k;
        vec.push_back(k);
    }
    auto it=vec.begin();
    auto ite=vec.end();
    for(auto beg=vec.begin();beg!=vec.end();beg++)
    {
        for(auto en=vec.begin();en!=vec.end();en++)
        {
            auto ans=find(it,ite,*beg-*en);
            if(ans!=ite&&(ans!=beg)&&(ans!=en))
            {
                tol++;
                break;
            }
        }
    }

    printf("%d",tol);

}