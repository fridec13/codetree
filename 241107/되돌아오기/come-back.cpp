#include <iostream>
using namespace std;

int map[2000][2000];

int n;

int offset = 1000;

int dy[4] = { -1, 0, 1, 0};
int dx[4] = { 0, 1, 0, -1};

int convdir(char d)
{
    if (d == 'N') return 0;
    else if (d== 'E') return 1;
    else if (d== 'S') return 2;
    else return 3;
}

// bool InRange(int ny, int nx)
// {
//     return (0 <= ny && n)
// }

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    
    int y = offset;
    int x = offset;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        char d;
        int dist;
        cin >> d >> dist;
        int curdir = convdir(d);
        for (int j = 0; j < dist; j++)
        {
            int ny = y + dy[curdir];
            int nx = x + dx[curdir];

            x = nx;
            y = ny;
            cnt++;
            if (y == offset && x == offset)
            {
                cout << cnt;
                return 0;
            }
        }
    }
    cout << -1;

    return 0;
}