#include <iostream>
#include <string>
using namespace std;

int dy[4] = { -1, 0, 1, 0};
int dx[4] = { 0, 1, 0, -1};



int main() {
    // 여기에 코드를 작성해주세요.
    string cmd;
    cin >> cmd;
    int x = 0;
    int y = 0;

    int curdir = 0;
    for (int i = 0; i < cmd.length(); i++)
    {
        if ( i != 0 && x == 0 && y == 0)
        {
            cout << i;
            return 0;
        }
        if (cmd[i] == 'L')
        {
            curdir = (curdir -1) %4;

        }
        else if (cmd[i] == 'R')
        {
            curdir = (curdir + 1) % 4;
        }
        else if (cmd[i] == 'F')
        {
            y = y + dy[curdir];
            x = x + dx[curdir];
        }
        
    }

    cout << -1;
    return 0;
}