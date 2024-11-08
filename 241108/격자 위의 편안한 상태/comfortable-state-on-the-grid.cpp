#include <iostream>
using namespace std;

int n;

int map[101][101];

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};


bool InRange(int ny, int nx)
{
    return (0 <= ny && ny < n && 0 <= nx && nx < n);
}

// 인접한 4개의 칸

void judgethree(int y, int x)
{
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if ( InRange(ny, nx) && map[ny][nx] == 1)
        {
            cnt++;
        }
    }

    (cnt == 3) ? cout << 1 << "\n" : cout << 0 << "\n";
    return;
}


//칠한 직후 판단해야함.

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;
        int y = r-1;
        int x = c-1;
        map[y][x] = 1;
        judgethree(y, x);

    }

    return 0;
}