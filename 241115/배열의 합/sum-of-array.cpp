#include <iostream>
using namespace std;

int arr[4][4];
int sum[4];

int main() {
    // 여기에 코드를 작성해주세요.

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            sum[i] += arr[i][j];
        }
    }

    for (int i = 0; i <4; i++)
    {
        cout << sum[i] << "\n";
    }

    return 0;
}