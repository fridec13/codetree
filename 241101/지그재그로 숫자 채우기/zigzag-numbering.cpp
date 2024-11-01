#include <iostream>
using namespace std;

int arr[100][100];

int num = 0;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                arr[j][i] = num;
                num++;
            }
        }
        else
        {
            for (int k = n-1; k >= 0; k--)
            {
                arr[k][i] = num;
                num++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}