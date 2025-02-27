#include <iostream>

using namespace std;
// 2*2에서 하나씩 뺀거,
// 3*1에서 순서대로 체크

int n;
int m;

int grid[1000][1000];

int cntbox;
int Maxcntbox;
int cntrow;
int Maxcntrow;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i <= n-2; i++)
    {
        for (int j =0; j <= m-2; j++)
        {
            int d1 = grid[i][j+1] + grid[i+1][j] + grid[i+1][j+1];
            int d2 = grid[i][j] + grid[i+1][j] + grid[i+1][j+1];
            int d3 = grid[i][j]+ grid[i][j+1] + grid[i+1][j+1];
            int d4 = grid[i][j]+ grid[i][j+1] + grid[i+1][j];
            if ( Maxcntbox < d1) Maxcntbox = d1;
            if ( Maxcntbox < d2) Maxcntbox = d2;
            if ( Maxcntbox < d3) Maxcntbox = d3;
            if ( Maxcntbox < d4) Maxcntbox = d4;

        }
    }

    for (int i = 0; i <= n-3; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int r1 = grid[i][j] + grid[i+1][j] + grid[i+2][j];
            // cout << "colume sum" << r1 << endl;
            if ( Maxcntrow < r1) Maxcntrow = r1;
        }
    }

    for (int i = 0; i <= m-3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int r2 = grid[j][i] + grid[j][i+1] + grid[j][i+2];
            // cout << "row sum : " << r2 << endl;
            if (Maxcntrow < r2) Maxcntrow = r2;
        }
    }
    if ( Maxcntbox < Maxcntrow) cout << Maxcntrow;
    else cout << Maxcntbox;
}