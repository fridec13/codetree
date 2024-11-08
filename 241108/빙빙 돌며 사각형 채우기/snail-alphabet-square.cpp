#include <iostream>
using namespace std;

int n, m;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

char map[100][100];

char PrintAl(int i) // 0 부터 시작 26에서 다시 'A'
{
    return ((i % 26) +'A');
}

bool InRange(int ny, int nx)
{
    return (0 <= ny && ny < n && 0 <= nx && nx < m);
}

int rotdir(int curdir)
{
    return (curdir + 1) % 4;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;

    map[0][0] = 'A';
    int x = 0;
    int y = 0;
    int curdir = 0;

    for (int i = 1; i <= n*m; i++)
    {
        int ny = y + dy[curdir];
        int nx = x + dx[curdir];

        if (InRange(ny, nx) && map[ny][nx] == 0)
        {
            x = nx;
            y = ny;
            map[y][x] = PrintAl(i);
        }
        else if (!InRange(ny, nx) || map[ny][nx] > 0)
        {
            curdir = rotdir(curdir);
            ny = y + dy[curdir];
            nx = x + dx[curdir];

            if (InRange(ny,nx) && map[ny][nx] == 0)
            {
                x = nx;
                y = ny;
                map[y][x] = PrintAl(i);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}