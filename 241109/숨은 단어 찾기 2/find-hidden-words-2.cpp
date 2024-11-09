#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N, M;

string input[50];

int dx[8] = { 1, 1, 1, 0, -1, -1, -1, 0 }; //우상 우 우하 하 좌하 좌 좌상 상
int dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };

bool InRange(int ny, int nx)
{
    return (0 <= ny && ny < N && 0 <= nx && nx < M);
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }

    // cout << input[3][2];

    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (input[i][j] == 'L' )
            {
                int curx = j;
                int cury = i;
                for (int k = 0; k < 8; k++)
                {
                    int ny = cury + dy[k];
                    int nx = curx + dx[k];

                    if ( InRange(ny, nx) && input[ny][nx] == 'E')
                    {
                        curx = ny;
                        cury = nx;
                        ny = cury + dy[k];
                        nx = curx + dx[k];
                        if (InRange(ny, nx) && input[ny][nx] == 'E')
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}