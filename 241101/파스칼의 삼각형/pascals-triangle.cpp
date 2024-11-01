#include <iostream>
using namespace std;

int arr[15][15];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    for (int i = 2; i < n; i++)
    {
        for (int j =1; j < n; j++)
        {
            if (i == j) break;
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {
            if ( arr[i][j] != 0)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}