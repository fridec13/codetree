#include <iostream>

using namespace std;

int N;
int grid[20][20];

int Coin;
int maxCoin;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    for (int y= 0; y <= N-3; y++)
    {
        for (int x=0; x <= N-3; x++)
        {
            Coin = grid[y][x] + grid[y][x+1] + grid[y][x+2] + grid[y+1][x] + grid[y+1][x+1] + grid[y+1][x+2] + grid[y+2][x] + grid[y+2][x+1] + grid[y+2][x+2];
            if (Coin > maxCoin)
            {
                maxCoin = Coin;
            }
        }
    }

    cout << maxCoin;

    // Please write your code here.

    return 0;
}
