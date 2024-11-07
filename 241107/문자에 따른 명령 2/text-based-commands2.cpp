#include <iostream>
#include <string>
using namespace std;

int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, -1, 0, 1};

int main() {
    // 여기에 코드를 작성해주세요.
    int x = 0;
    int y = 0;

    int cur_dirnum = 3;

    string command;
    cin >> command;
    for (int i = 0; i < command.length(); i++)
    {

        if ( command[i] == 'L')
        {
            cur_dirnum = (cur_dirnum - 1 + 4) % 4;
        }
        else if ( command[i] == 'R')
        {
            cur_dirnum = (cur_dirnum + 1) % 4;
        }
        else if ( command[i] == 'F')
        {
            x = x + dx[cur_dirnum];
            y = y + dy[cur_dirnum];
        }
        
    }

    cout << x << " " << y;
    return 0;
}