#include <bits/stdc++.h>
using namespace std;
char lr[2]={'(',')'};
int main(){
    vector<string>input;
    vector<string>output;
    string curinput;
    while(getline(cin,curinput))
    {
        input.push_back(curinput);
        curinput.clear();
    }
    int n=input.size();
    for (int i = 0; i < n; i++)
    {
        string now=input[i];
        stack<pair<char,int>> stac;
        int k=now.size();
        pair<char,int>point;
        string ans(k,' ');
        for (int j = 0; j < k; j++)
        {
            if(!isalpha(now[j]))
            {
                if(!stac.empty()&&now[j]==')'&&stac.top().first=='(')
                {
                    stac.pop();
                }            
                else{
                point.first=now[j];
                point.second=j;
                stac.push(point);
                }
            }

        }
        while(!stac.empty())
        {
            ans[stac.top().second]=(stac.top().first=='('?'$':'?');
            stac.pop();
        }
        output.push_back(now);
        output.push_back(ans);
    }
    for(auto e:output)
    {
        cout<<e<<endl;
    }
    return 0;
    

}