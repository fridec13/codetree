#include <iostream>
using namespace std;
int arr[4][4];
int sum;
int main() {
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    cout << sum;
    return 0;
}