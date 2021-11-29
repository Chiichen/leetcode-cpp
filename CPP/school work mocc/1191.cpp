#include <iostream>
#include <queue>
using namespace std;
const int MAXN = 102;
char room[MAXN][MAXN];

struct point {
    int x;  
    int y;  
    int day; 
};

queue<point> q;
unsigned long long ans=0;

int main() {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>room[i][j];
            if ('@'==room[i][j]) {
                point t;
                t.x = i;
                t.y = j;
                t.day = 1;
                q.push(t);
                ans++;
            }
        }
    }
    int m;
    cin>>m;
    const int movex[] = { 0, 1, 0, -1};
    const int movey[] = {-1, 0, 1,  0};
    while (!q.empty()) {
        point curr = q.front();
        q.pop();
        if (curr.day>=m) {
            break;
        }
        for (int i=0; i<4; i++) {
            int nx = curr.x+movex[i];
            int ny = curr.y+movey[i];
            if (nx>=0&&nx<n && ny>=0&&ny<n && '.'==room[nx][ny]) {
                room[nx][ny] = '@';
                ans++;
                point t;
                t.x = nx;
                t.y = ny;
                t.day = curr.day+1;
                q.push(t);
            }
        }
    }
    cout << ans << endl;
    return 0;
}