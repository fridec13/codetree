#include <iostream>
using namespace std;

int dy[4] = { 0, -1, 0, 1};
int dx[4] = { 1, 0, -1, 0};
//동남서북;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int cur_x = 0;
    int cur_y = 0;
    for (int i =0; i < N; i++)
    {
        char dir;
        int dist;
        cin >> dir >> dist;
        if ( dir == 'N')
        {
            ny = cur_y + dy[3] * dist;
            nx = cur_x + dx[3] * dist;
            cur_y = ny;
            cur_x = nx;
        }
        else if ( dir == 'E')
        {
            ny = cur_y + dy[0] * dist;
            nx = cur_x + dx[0] * dist;
            cur_y = ny;
            cur_x = nx;
        }
        else if ( dir == 'S')
        {
            ny = cur_y + dy[1] * dist;
            nx = cur_x + dx[1] * dist;
            cur_y = ny;
            cur_x = nx;
        }
        else if ( dir == 'W')
        {
            ny = cur_y + dy[2] * dist;
            nx = cur_x + dx[2] * dist;
            cur_y = ny;
            cur_x = nx;
        }
    }

    cout << cur_x << " " << cur_y;

    return 0;
}