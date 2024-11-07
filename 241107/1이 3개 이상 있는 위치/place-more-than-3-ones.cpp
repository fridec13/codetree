#include <iostream>

using namespace std;

int map[101][101];

int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};

int n;

bool RangeIn(int ny, int nx)
{
    return (0 <= ny && ny < n && 0 <= nx && nx < n);
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }
    int cnt = 0;
    int num = 0;
    for (int i =0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnt = 0;
            for (int k = 0; k < 4; k++)
            {
                int ny, nx;
                ny = i + dy[k];
                nx = j + dx[k];
                if ( RangeIn(ny, nx) && map[ny][nx] == 1 )
                {
                    cnt++;
                }

            }
            if (cnt >= 3)
            {
                num++;
            }
        }
    }
    cout << num;
    return 0;
}