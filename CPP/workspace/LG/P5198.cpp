#include <iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<string.h>
using namespace std;

struct point {
 int x, y;
};

int n, G[1010][1010], cnt = 0, xmove[4] = { 1,0,-1,0 }, ymove[4] = { 0,1,0,-1 },num=0,size1=0;
char c;
vector<point> v[1000000];
void bfs(int x0,int y0) {
 point t;
 queue<point> q;
 t.x = x0; t.y = y0;
 q.push(t);
 v[++cnt].push_back(t);
 G[t.x][t.y] = cnt + 1;
 while (!q.empty()) {
  t = q.front();
  q.pop();
  for (int i = 0; i < 4; i++) {
   point temp;
   temp.x = t.x + xmove[i];
   temp.y = t.y + ymove[i];
   if (G[temp.x][temp.y] == 1) {
    G[temp.x][temp.y] = cnt + 1;
    q.push(temp);
    v[cnt].push_back(temp);
   }
  }
 }
}

int main(){
 memset(G,0,sizeof(G));
 cin >> n;
 for(int i=1;i<=n;i++)
  for (int j = 1; j <= n; j++) {
   cin >> c;
   if (c == '#')G[i][j] = 1;
  }

 for (int i = 1; i <= n; i++)
  for (int j = 1; j <= n; j++) 
   if (G[i][j] == 1) bfs(i,j);
 for (int i = 1; i <= cnt; i++) {
  int tempsize=0;
  if (v[i].size() < num) continue;
  for (int j = 0; j < v[i].size(); j++) 
   for (int k = 0; k < 4; k++)
    if (G[v[i][j].x + xmove[k]][v[i][j].y + ymove[k]] == 0) tempsize++;
  if (v[i].size() == num && tempsize > size1) continue;
  num = v[i].size();
  size1 = tempsize;
 }
 cout << num << " " << size1 << "\n";
}