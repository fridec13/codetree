#include <iostream>
#include <string>

using namespace std;

int n;


int dy[4] = { -1, 0, 1, 0};
int dx[4] = { 0, 1, 0, -1};
//북동남서

bool InRange(int ny, int nx)
{
    return (0 <= ny && ny < n && 0 <= nx && nx < n);
}

int map[100][100];

void drawmap()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }
}

int rotateLeft(int curdir)
{
    return (curdir -1 + 4) % 4;
}

int rotateRight(int curdir)
{
    return (curdir +1 ) % 4;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int T;
    string cmd;

    cin >> n >> T >> cmd;

    drawmap();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j =0; j < n; j++)
    //     {
    //         cout << map[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int sum = 0;
    int y = n/2;
    int x = n/2;

    sum = map[y][x];
    int curdir = 0;

    for (int i = 0; i < cmd.length(); i++)
    {
        int ny = y + dy[curdir];
        int nx = x + dx[curdir];

        if (InRange(ny,nx) && cmd[i] == 'F')
        {
            y = ny;
            x = nx;
            sum += map[y][x];
        }
        else if ( !InRange(ny, nx) && cmd[i] == 'F')
        {
            continue;
        }

        if (cmd[i] == 'L')
        {
            curdir = rotateLeft(curdir);
        }

        if (cmd[i] == 'R')
        {
            curdir = rotateRight(curdir);
        }
    }

    cout << sum;
    return 0;
}