#include <iostream>
using namespace std;

int arr[10][10];

int cnt = 1;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ( i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << i + n*j << " ";
                cnt++;
            }
        }
        else
        {
            for (int k = 0; k < n; k++)
            {
                cout << i+ n*k << " ";
                cnt++;
            }
        }
        cout << "\n";
    }
    return 0;
}