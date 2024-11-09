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
                int cury = i;
                int curx = j;
                // cout << curx << cury << "L\n";
                for (int k = 0; k < 8; k++)
                {
                    int ny = cury + dy[k];
                    int nx = curx + dx[k];
                    // cout << ny << nx << "\n";

                    if ( InRange(ny, nx) && input[ny][nx] == 'E')
                    {

                        int cury1 = ny;
                        int curx1 = nx;
                        // cout << ny << nx << "dir" << k << "L\n";
                        // cout << cury << "\n";
                        ny = cury1 + dy[k];
                        nx = curx1 + dx[k];
                        // cout << dx[k] << "\n";

                        // cout << ny << nx << "E1\n";
                        if (InRange(ny, nx) && input[ny][nx] == 'E')
                        {
                            // cout << ny << nx << "E2\n";
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