#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[100];
int minval = INT_MAX;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i]*0;

        for (int j = 0; j < n; j++)
        {
            int dist = 0;
            if (i != j)
            {
                dist = abs(i - j) * arr[j];
                sum += dist;
            }
        }
        minval = min(minval, sum);
    }
    //이동거리는 사람수 곱하기 거리
    cout << minval;
    return 0;
}