#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, s;
    cin >> n >> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int minval = INT_MAX;

    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int diff = sum - arr[i] - arr[j];
            int sub = abs(s - diff);
            minval = min(minval, sub);
        }
    }

    cout << minval;
    return 0;
}