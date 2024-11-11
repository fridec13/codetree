#include <iostream>
#include <algorithm>

using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.

    int n, k;
    cin >> n >> k;
    int maxval = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n-k; i++)
    {
        int sum = 0;
        for (int j = i; j < i+k; j++)
        {
            sum += arr[j];
        }
        maxval = max(maxval, sum);
    }
    cout << maxval;
    return 0;
}