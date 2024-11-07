#include <iostream>
#include <string>

using namespace std;

int n;

int map[51][51];

int dx[4] = {0, -1, 1, 0};
int dy[4] = {-1, 0, 0, 1};

bool RangeIn(int ny, int nx)
{
    return (0 <= ny && ny < n && 0 <= nx && nx < n);
}

int convdir( char d)
{
    if ( d == 'U')
    {
        return 0;
    }
    else if ( d == 'D') return 3;
    else if ( d == 'L') return 1;
    else return 2;
}

int mirrordir(int cur_dir)
{
    return 3 - cur_dir;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int t, r, c;
    char d;
    cin >> n >> t >> r >> c >> d;
    int cur_dir = convdir(d);
    int x = c - 1;
    int y = r - 1;
    
    while (t--)
    {
        int ny;
        int nx;

        ny = y + dy[cur_dir];
        nx = x + dx[cur_dir];

        if (RangeIn(ny, nx))
        {
            y = ny;
            x = nx;
        }
        else if (!RangeIn(ny, nx))
        {
            cur_dir = mirrordir(cur_dir);
        }
    }

    cout << y + 1 << " " << x + 1;

    return 0;
}