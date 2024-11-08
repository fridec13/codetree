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
    for (int i = 0; i < n-2; i++)
    {
        int sum = 0;
        for (int j = i; j < n+i; j++)
        {
            if (arr[i][j]) sum += arr[i][j];            
        }
        maxval = max(maxval, sum);
    }
    cout << maxval;
    return 0;
}