#include <iostream>
using namespace std;

int num = 1;
int arr[10][10];

int main() {
    int n;
    cin >> n;

    for (int j = n-1; j >= 0; j--)
    {
        if (n % 2 == 0)
        {
            if ( j % 2 == 1)
            {
                for (int i = n-1; i >= 0; i--)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
        }
        else
        {
            if ( j % 2 == 0)
            {
                for (int i = n-1; i >= 0; i--)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
        }
    }

    for (int i =0; i < n; i++)
    {
        for (int j =0; j<n; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << "\n";
    }

    return 0;
}