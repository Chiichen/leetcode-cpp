#include <iostream>
#include <cmath>
using namespace std;

int picture[100][100] = {};
double New_picture[100][100] = {};
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> picture[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0) || (i == (n - 1)) || (j == 0) || (j == (m - 1))) // 四周最外侧的像素点不处理；
            {
                New_picture[i][j] = picture[i][j];
            }
            else
            {
                New_picture[i][j] = round((picture[i][j] + picture[i - 1][j] + picture[i + 1][j] + picture[i][j - 1] + picture[i][j + 1]) / 5.0); // round()舍入到最接近的整数；
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j != (m - 1))
            {
                cout << New_picture[i][j] << ' ';
            }
            else if (j == (m - 1))
            {
                cout << New_picture[i][j] << endl;
            }
        }
    }
    return 0;
}
