#include <iostream>
using namespace std;

int arr[10][10];

int main() {
    int n, m, r, c;
    cin >> n >> m;
    for (int i = 0; i< m; i++)
    {
        cin >> r >> c;
        arr[r-1][c-1] = 1;
    }
    for (int i =0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << "\n";
    }
    return 0;
}