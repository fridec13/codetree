#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int map[101][101];

int n, m;

bool RangeIn(int ny, int nx)
{
    return (0 <= ny && ny < n && 0 <= nx && nx < m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int curdir = 0;
    // 시계방향으로 90도 돌리기
    // curdir이 3일 때 돌리면 0으로;

    int x = 0;
    int y = 0;
    cin >> n >> m;
    
    int cnt = 1;
    map[0][0] = cnt;
    cnt++;

    for (int i = 0; i < n*m; i++)
    {
        int ny = y + dy[curdir];
        int nx = x + dx[curdir];

        if (RangeIn(ny, nx) && map[ny][nx] == 0)
        {
            x = nx;
            y = ny;
            map[y][x] = cnt;
            cnt++;
        }
        else
        {
            curdir = (curdir + 1) % 4;
            ny = y + dy[curdir];
            nx = x + dx[curdir];
            if (map[ny][nx] == 0)
            {
                x = nx;
                y = ny;

                map[y][x] = cnt;
                cnt++;
            }
        }

    }

    for (int i = 0; i< n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}