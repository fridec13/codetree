#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[20][20];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int maxval = -99999999;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-2; j++)
        {
            maxval = max(maxval, arr[i][j] + arr[i][j+1] + arr[i][j+2]);          
        }
    }

    //더하려면 3중 for문을 써야하는가?
    cout << maxval;
    return 0;
}