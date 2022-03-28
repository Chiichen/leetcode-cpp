#include<bits/stdc++.h>
using namespace std;
int getv(int row, int col, int max_row, int max_col) 
{
    int level = min(min(row, max_row - 1 - row), min(col, max_col - 1 - col));
    int distance = row + col - level * 2;
    int start_value = 2 * level * (max_row + max_col - 2 * level) + 1;
    if (row == level || col == max_col - 1 - level ||(max_col < max_row && level * 2 + 1 == max_col))
        return start_value + distance;
    int next_value = start_value + (max_row + max_col - 4 * level - 2) * 2;
    return next_value - distance;
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    cout<<getv(x-1,y-1,n,n);
    return 0;
}
